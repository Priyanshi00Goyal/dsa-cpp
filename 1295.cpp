#include <bits/stdc++.h>
using namespace std;
int  findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int digitCount = 0;
        while (num > 0) {
            num /= 10;
            digitCount++;
        }
        if (digitCount % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    vector<int> nums(5);
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    int result = findNumbers(nums);
    cout << "Count of numbers with even number of digits: " << result << endl;
    return 0;
}
