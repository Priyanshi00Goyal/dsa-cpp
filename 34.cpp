#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        
        // If the first occurrence doesn't exist, the element isn't in the array
        if (first == -1) {
            return {-1, -1};
        }
        
        int last = findBound(nums, target, false);
        return {first, last};
    }

private:
    int findBound(const std::vector<int>& nums, int target, bool isFirst) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid; // Potential answer found
                if (isFirst) {
                    high = mid - 1; // Keep searching left for the first occurrence
                } else {
                    low = mid + 1;  // Keep searching right for the last occurrence
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    std::vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    
    std::vector<int> result = solver.searchRange(nums, target);
    std::cout << "Positions: [" << result[0] << ", " << result[1] << "]\n"; // Output: [3, 4]
    return 0;
}
