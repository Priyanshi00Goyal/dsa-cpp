#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int result = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long long total_hours = 0;
            for (int pile : piles) {
                total_hours += (pile + mid - 1) / mid; // Fast ceiling division
            }
            
            if (total_hours <= h) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};
