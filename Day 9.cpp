#include<bits/stdc++.h>
using namespace std;

//Function to find the second largest element in an array
int secondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
//Function to find the second smallest element in an array
int secondSmallest(int arr[], int n) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}
//function  to check if the array is sorted in ascending order
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
//function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int j = 0; // Index of the next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // New size of the array after removing duplicates
}
//function to left rotate an array by one position
void leftRotate(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int main() {
    int arr[] = {4, 7, 2, 9, 1};//array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the second largest element in the array
    int secondLargestElement = secondLargest(arr, n);
    cout << "Second largest element: " << secondLargestElement << endl;

    // Find the second smallest element in the array
    int secondSmallestElement = secondSmallest(arr, n);
    cout << "Second smallest element: " << secondSmallestElement << endl;

    // Check if the array is sorted in ascending order
    bool sorted = isSorted(arr, n);
    if (sorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    // Remove duplicates from a sorted array
    int newSize = removeDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Left rotate the array by one position
    leftRotate(arr, n);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}