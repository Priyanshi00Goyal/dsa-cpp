#include <algorithm>
#include <string>

class Solution {
public:
    std::string reverseStr(std::string s, int k) {
        int n = s.length();
        
        for (int i = 0; i < n; i += 2 * k) {
            // Find the end iterator: either i + k or the end of the string
            int right = std::min(i + k, n);
            std::reverse(s.begin() + i, s.begin() + right);
        }
        
        return s;
    }
};
