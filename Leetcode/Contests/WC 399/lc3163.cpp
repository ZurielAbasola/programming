class Solution {
public:
    string compressedString(string word) {
        string comp;
        int i = 0;
        int n = word.length();

        while (i < n) {
            char current_char = word[i];
            int count = 0;

            while (i < n && word[i] == current_char && count < 9) {
                ++count;
                ++i;
            }

            comp += to_string(count) + current_char;
        }

        return comp;
    }
};