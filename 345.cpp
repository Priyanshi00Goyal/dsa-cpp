class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Move left pointer forward until a vowel is found
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right pointer backward until a vowel is found
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            
            // Swap the vowels and advance both pointers
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
