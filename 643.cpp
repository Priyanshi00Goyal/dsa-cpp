#include <algorithm>
#include <vector>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        int currentSum = 0;
        
        // Calculate the sum of the first window of size k
        for (int i = 0; i < k; ++i) {
            currentSum += nums[i];
        }
        
        int maxSum = currentSum;
        
        // Slide the window across the rest of the array
        for (int i = k; i < nums.size(); ++i) {
            currentSum += nums[i] - nums[i - k];
            maxSum = std::max(maxSum, currentSum);
        }
        
        // Cast to double to avoid integer division truncation
        return static_cast<double>(maxSum) / k;
    }
};
