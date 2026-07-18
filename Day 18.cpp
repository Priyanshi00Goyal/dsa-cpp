#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate total hours at given speed
    int calculateTotalHours(vector<int>& piles, int speed) {
        int totalH = 0;
        for (int bananas : piles) {
            totalH += ceil((double)bananas / speed);
        }
        return totalH;
    }

    // Function to find minimum eating speed
    int minEatingSpeed(vector<int>& piles, int h) {
        // Find maximum element
        int maxPile = *max_element(piles.begin(), piles.end());

        // Initialize low and high pointers
        int low = 1, high = maxPile;
        int ans = maxPile;

        // Binary search on answer space
        while (low <= high) {
            int mid = (low + high) / 2;
            int totalH = calculateTotalHours(piles, mid);

            // If possible, try smaller speed
            if (totalH <= h) {
                ans = mid;
                high = mid - 1;
            }
            // Otherwise, try larger speed
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};


class SmallestDivisorFinder {
public:
    // Helper function to calculate sum of division results
    int sumByD(vector<int>& arr, int div) {
        int sum = 0;
        for (int num : arr) {
            sum += ceil((double)num / div);
        }
        return sum;
    }

    // Function to find the smallest divisor
    int smallestDivisor(vector<int>& arr, int limit) {
        //if (arr.size() > limit) return -1;

        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        // Binary search to find smallest divisor
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(arr, mid) <= limit) {
                high = mid - 1;  // Try smaller divisor
            } else {
                low = mid + 1;   // Try larger divisor
            }
        }

        return low;
    }
};

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    Solution obj;
    cout << "koko eays " << obj.minEatingSpeed(piles, h) <<" bananas per hour." << endl;

    SmallestDivisorFinder solver;
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = solver.smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    
    return 0;
}