#include <cctype>
#include <stack>
#include <string>

// TODO: Review solution
using namespace std;

class Solution {
public:
  string decodeString(string s) {
    stack<char> strStack;

    for (int i = 0; i < s.size(); ++i) {
      if (s[i] != ']') {
        strStack.push(s[i]); 
      }
      else {
        string currStack = "";

        while (strStack.top() != '[') {
          currStack = strStack.top() + currStack;
          strStack.pop();
        }

        strStack.pop();
        string number = "";

        while (!strStack.empty() && isdigit(strStack.top())) {
          number = strStack.top() + number;
          strStack.pop();
        }

        int k = stoi(number);

        while(k--) {
          for (int j = 0; j < currStack.size(); ++j) {
            strStack.push(currStack[j]);
          }
        }
      }
    }

    s = "";
    while (!strStack.empty()) {
      s = strStack.top() + s;
      strStack.pop();
    }
    return s;
  }
};
