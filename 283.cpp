#include<bits/stdc++.h>
using namespace std;

//Function to move all zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill the rest of the array with zeros
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
