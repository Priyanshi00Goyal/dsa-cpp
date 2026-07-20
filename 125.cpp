#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Move left pointer rightward if current character is not alphanumeric
            while (left < right && !std::isalnum(s[left])) {
                left++;
            }
            // Move right pointer leftward if current character is not alphanumeric
            while (left < right && !std::isalnum(s[right])) {
                right--;
            }
            
            // Compare characters ignoring case
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }
            
            // Shift both pointers inward
            left++;
            right--;
        }
        
        return true;
    }
};
