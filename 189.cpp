#include<bits/stdc++.h>
using namespace std;

//Function to left rotate an array by d positions
void leftRotate(int arr[], int n, int d) {
    d = d % n; // In case d is greater than n
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
