#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
    	vector<int> pos;
    	string vowels = "";

    	int n = s.length();
    	for(int i = 0; i != n; i++) {
    		if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || 
    			tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
    			pos.push_back(i);
    			vowels += s[i];
    		}
    	}

    	int j = 0;
    	for(auto rit = vowels.rbegin(); rit!=vowels.rend(); ++rit) {
    		s[pos[j]] = *rit;
    		j++;
    	}

    	return s;                                 
    }
};

int main() {
	Solution sol;
	string s;

	getline(cin, s);

	cout << sol.reverseVowels(s);
}