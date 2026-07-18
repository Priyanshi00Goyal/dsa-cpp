#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int smallestDivisor(std::vector<int>& nums, int threshold) {
        int low = 1;
        int high = *std::max_element(nums.begin(), nums.end());
        int result = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long long current_sum = 0;
            for (int num : nums) {
                current_sum += (num + mid - 1) / mid; // Fast ceiling division
            }
            
            if (current_sum <= threshold) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};
