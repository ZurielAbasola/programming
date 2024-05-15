#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        queue<char> w1, w2;

        string res = "";
        for (char c : word1) {
            w1.push(c);
        }

        for (char c : word2) {
            w2.push(c);
        }

        while(!w1.empty() || !w2.empty()) {
            if(!w1.empty()) {
                res += w1.front();
                w1.pop();
            }

            if(!w2.empty()) {
                res += w2.front();
                w2.pop();
            }
        }

        return res;
    }
};

int main(){
    string word1, word2;
    Solution sol;

    cin >> word1 >> word2;

    cout << sol.mergeAlternately(word1, word2);

    return 0;
}