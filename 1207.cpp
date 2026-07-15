#include<bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> frequencies;
        
        // Step 1: Count occurrences
        for (int num : arr) {
            frequencies[num]++;
        }
        
        std::unordered_set<int> uniqueCounts;
        
        // Step 2: Insert values into a set
        for (auto const& [key, value] : frequencies) {
            uniqueCounts.insert(value);
        }
        
        // Step 3: Compare map size with set size
        return frequencies.size() == uniqueCounts.size();
    }
};
