#include <bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    int maxCandies = *max_element(candies.begin(), candies.end());

    vector<bool> ans;

    for(int i = 0; i < candies.size(); i++){
        ans.push_back(candies[i] + extraCandies >= maxCandies);
    }

    return ans;
}
int main() {
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for (bool hasMax : result) {
        cout << (hasMax ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
