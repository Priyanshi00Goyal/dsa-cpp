#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return {};
    }

    vector<int> uniqueArr;
    uniqueArr.push_back(nums[0]);

    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) {
            uniqueArr.push_back(nums[i]);
        }
    }

    return uniqueArr;
}
int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    vector<int> result = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}