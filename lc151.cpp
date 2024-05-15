#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string static reverseWords(string s) {
        if (s.empty()) return s;

        stack<string> stack;
        string result;
        for (int i = 0; i < s.length(); ++i) {
            string word;
            if (s[i] == ' ') continue;
            while (i < s.length() && s[i] != ' ') {
                word += s[i++];
            }
            stack.push(word);
        }

        while(!stack.empty()) {
            result += stack.top();
            stack.pop();
            if (!stack.empty()) result += ' ';
        }

        return result;
    }
};

int main() {
    string s;

    getline(cin, s);

    cout << Solution::reverseWords(s);

    return 0;
}