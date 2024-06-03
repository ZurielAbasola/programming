#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> wrdmap1, wrdmap2;
        unordered_set<char> chrset;

        if (word1.size() != word2.size()) {
            return false;
        }

        for (int i = 0; i < word1.size(); ++i) {
            if (!wrdmap1.contains(word1[i])) wrdmap1.insert({word1[i], 1});
            else wrdmap1[word[i]]++;

            if (!wrdmap2.contains(word1[i])) wrdmap2.insert({word2[i], 1});
            else wrdmap2[word[i]]++;
        }
    }
};