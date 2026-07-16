#include <iostream>
#include <vector>

// Returns index of target, or -1 if not found
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

// Array must be sorted before using this function
int iterativeBinarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Prevents potential integer overflow
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }
    return -1; 
}

int main() {
    std::vector<int> data = {10, 50, 30, 70, 80, 20};
    int target = 30;
    
    int result1 = linearSearch(data, target);
    std::cout << "Linear Search: Index " << result1 << std::endl;

    int result2 = iterativeBinarySearch(data, target);
    std::cout << "Iterative Binary Search: Index " << result2 << std::endl;
    return 0;
}
