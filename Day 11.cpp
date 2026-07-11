#include<bits/stdc++.h>
using namespace std;

//Function to find Union of two arrays //Optimized Approach
vector<int> sortedarray(vector<int> arr1, vector<int> arr2) {
    vector<int> unionarr;
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (unionarr.empty() || unionarr.back() != arr1[i]) {
                unionarr.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (unionarr.empty() || unionarr.back() != arr2[j]) {
                unionarr.push_back(arr2[j]);
            }
            j++;
        } else {
            if (unionarr.empty() || unionarr.back() != arr1[i]) {
                unionarr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (unionarr.empty() || unionarr.back() != arr1[i]) {
            unionarr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (unionarr.empty() || unionarr.back() != arr2[j]) {
            unionarr.push_back(arr2[j]);
        }
        j++;
    }

    return unionarr;
}

//Function to find intersection of two arrays //Optimized Approach
vector<int> intersectionarray(vector<int> arr1, vector<int> arr2) {
    vector<int> intersectionarr;
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            if (intersectionarr.empty() || intersectionarr.back() != arr1[i]) {
                intersectionarr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    return intersectionarr;
}
int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> union_result = sortedarray(arr1, arr2);
    vector<int> intersection_result = intersectionarray(arr1, arr2);

    cout << "Union of the two arrays is: ";
    for (int num : union_result) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection of the two arrays is: ";
    for (int num : intersection_result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}