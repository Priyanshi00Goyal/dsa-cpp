#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=0;
            }
        }
        return maxi;
    }

    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
    
};
