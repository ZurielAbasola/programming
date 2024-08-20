#include <string>
#include <climits>

using namespace std;

class Solution {
public:  
    int maxVowels(string s, int k) {
        // int max_vow = INT_MIN;
        // for (int i = 0; i < s.length() - k + 1; ++i) {
        //     int vow = 0;
        //     for (int j = 0; j < k; ++j ) {
        //         if (s[j + i] == 'a' || s[j+ i] == 'e' || s[j + i] == 'i' || 
        //             s[j + i] == 'o' || s[j + i] == 'u') vow++;
        //     }

        //     max_vow = max(max_vow, vow);
            
        //     if (max_vow == k) return vow;
        // }   

        // return max_vow;

        auto isVowel = [](char ch) {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };
        
        int max_vow = 0, current_vow = 0;
        
        // Initialize the first window
        for (int i = 0; i < k; ++i) {
            if (isVowel(s[i])) {
                ++current_vow;
            }
        }
        
        max_vow = current_vow;
        
        // Slide the window over the string
        for (int i = k; i < s.length(); ++i) {
            if (isVowel(s[i])) {
                ++current_vow;
            }
            if (isVowel(s[i - k])) {
                --current_vow;
            }
            max_vow = max(max_vow, current_vow);
        }
        
        return max_vow;
    }
};


/* Explanation of optimized solution:
    1. Lambda function -> isVowel used to check if a character is a vowel.
    2. Initialization window size `k` is processed to count the number of vowels.
    3. Sliding window -> adjust by adding new character and subtracting the old character.
    4. Update maximum -> maximum number of vowels found is updated.
*/
