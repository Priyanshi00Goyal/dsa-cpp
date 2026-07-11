#include<bits/stdc++.h>
using namespace std;
//Function to find missing elements in an array using xor operation
vector<int> missingElementsXOR(vector<int> arr, int n) {
    vector<int> missing;
    int xor_all = 0;
    int xor_arr = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_all ^= (i + 1); // XOR of all numbers from 1 to n
        xor_arr ^= arr[i];
    }
    xor_all ^= (n + 1); // XOR of all numbers from 1 to n+1

    // The missing number is the XOR of the two results
    int missing_num = xor_all ^ xor_arr;

    return {missing_num};
}
int main(){
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> missing_result = missingElementsXOR(arr1, arr1.size());
    cout << "Missing elements are: ";
    for (int num : missing_result) {
        cout << num << " ";
    }
    cout << endl;
}