#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  int compress(vector<char>& chars) {
    if (chars.empty()) return 0;

    char curr = chars[0];
    int count = 1;
    string s;
    for (int i = 1; i<= chars.size(); ++i) {
      if (i < chars.size() && chars[i] == curr) count++;
      else {
        s.push_back(curr);
        if (count > 1) {
          string str = to_string(count);
          for (char c : str) {
            s.push_back(c);
          }
        }
        curr = i < chars.size() ? chars[i] : 0;
        count = 1;
      }
    }
    for (int i = 0; i < s.size(); ++i) {
      chars[i] = s[i];
    }
    return s.size();
  }
};

// int compress(vector<char>& chars) {
//     unordered_map<char, int> charMap;

//     for (int i = 0; i < chars.size(); ++i) {
//       if (!charMap.count(chars[i])) {
//         charMap.insert({chars[i], 1});
//       }
//       else {
//         charMap[chars[i]]++;
//       }
//     }

//     chars.clear();
//     for (auto chr : charMap) {
//       chars.push_back(chr.first);
//       if (chr.second == 1) {
//         chars.push_back(char(chr.second));
//       }
//     }

//     return charMap.size() * 2;
//   }
