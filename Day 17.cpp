#include <iostream>
#include <vector>
#include <utility>

// Returns the index of the first element >= target
int lowerBound(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size(); // Default if no element is >= target

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;       // Look for a smaller index on the left
            high = mid - 1;
        } else {
            low = mid + 1;   // Look on the right
        }
    }
    return ans;
}

// Returns the index of the first element > target
int upperBound(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size(); // Default if no element is > target

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            ans = mid;       // Look for a smaller index on the left
            high = mid - 1;
        } else {
            low = mid + 1;   // Look on the right
        }
    }
    return ans;
}

std::pair<int, int> findFirstAndLast(const std::vector<int>& arr, int target) {
    int n = arr.size();
    int first = -1;
    int last = -1;

    // Find First Occurrence (Similar to Lower Bound)
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1; // Keep searching left
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If element doesn't exist, no need to look for last occurrence
    if (first == -1) return {-1, -1};

    // Find Last Occurrence
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1; // Keep searching right
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return {first, last};
}

std::pair<int, int> findFloorAndCeil(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int floor = -1;
    int ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return {arr[mid], arr[mid]}; // Target found, it is both floor and ceil
        }
        else if (arr[mid] < target) {
            floor = arr[mid]; // Current element could be the floor
            low = mid + 1;    // Look for a larger value closer to target
        } 
        else {
            ceil = arr[mid];  // Current element could be the ceil
            high = mid - 1;   // Look for a smaller value closer to target
        }
    }
    return {floor, ceil};
}

int main() {
    std::vector<int> arr = {1, 2, 4, 4, 5, 6, 8};
    int target = 4;
    std::cout << "Lower Bound index of " << target << " is: " << lowerBound(arr, target) << "\n";
    std::cout << "Upper Bound index of " << target << " is: " << upperBound(arr, target) << "\n";
    auto result = findFirstAndLast(arr, target);
    std::cout << "First Occurrence: " << result.first << ", Last Occurrence: " << result.second << "\n";
    auto result = findFloorAndCeil(arr, target);
    std::cout << "Floor of " << target << " is: " << result.first << "\n";
    std::cout << "Ceil of " << target << " is: " << result.second << "\n";
    return 0;
}
