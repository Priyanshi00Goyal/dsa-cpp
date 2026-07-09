#include <bits/stdc++.h>
using namespace std;
// Function to find the largest element in an array
int largestElement(int arr[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
// Function to find the smallest element in an array
int smallestElement(int arr[], int n) {
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
// Function to search for an element in an array
int searchElement(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}
// Function to count the number of even numbers in an array
int countEven(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    //simple iteration to print the array elements
    int arr[] = {4,7,2,9,1}; //array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    // Find the largest element in the array
    cout << endl;
    int largest = largestElement(arr, 5);
    cout << "Largest element: " << largest << endl;
    // Find the smallest element in the array
    int smallest = smallestElement(arr, 5);
    cout << "Smallest element: " << smallest << endl;
    // Search for an element in the array
    int num = 8;
    if (searchElement(arr, 5, num)) {
        cout << num << " is present in the array." << endl;
    } else {
        cout << num << " is not present in the array." << endl;
    }
    // Count the number of even numbers in the array
    int evenCount = countEven(arr, 5);
    if (evenCount > 0) {
        cout << "There are " << evenCount << " even numbers in the array." << endl;
    } else {
        cout << "There are no even numbers in the array." << endl;
    }
    return 0;
}