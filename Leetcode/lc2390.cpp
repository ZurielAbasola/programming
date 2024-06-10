#include <string>

// TODO: Finish solution for problem 2390 
using namespace std;

class Solution {
public:
  string removeStars(string s) {
    string res = "";
    
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == '*') {
        res.pop_back();
        continue;
      }
      res.push_back(s[i]);
    }

    return res;
  }
};
 
