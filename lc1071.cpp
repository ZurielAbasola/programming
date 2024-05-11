#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int gcd(int a, int b) { 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    }; 
  
    return result; 
} 

    string gcdOfStrings(string str1, string str2) {
        string res;

        if (str1 + str2 != str2 + str1) {
            return "";
        }   

        int gcdLength = gcd(str1.size(), str2.size());

        return str1.substr(0, gcdLength);
    }
};

int main() {
    Solution sol;
    string str1, str2;

    cin >> str1 >> str2;

    cout << sol.gcdOfStrings(str1, str2);

    return 0;
}