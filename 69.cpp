#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        // Handle base cases
        if (x == 0 || x == 1) {
            return x;
        }

        int low = 1;
        int high = x;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Use division to prevent integer overflow (mid * mid > x)
            if (mid <= x / mid) {
                ans = mid;     // Store the potential floor square root
                low = mid + 1; // Try to find a larger value
            } else {
                high = mid - 1; // Eliminate the right half
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    int testValue = 8;
    std::cout << "The integer square root of " << testValue << " is: " << solver.mySqrt(testValue) << "\n";
    return 0;
}
