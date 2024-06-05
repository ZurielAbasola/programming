#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        auto extract_key = [](const unordered_map<char, int>& map) {
            unordered_set<char> keys;
            for (auto pair : map) {
                keys.insert(pair.first);
            }

            return keys;
        };

        auto extract_count = [](const unordered_map<char, int>& map) {
            vector<int> charcount;
            for (auto pair : map) {
                charcount.push_back(pair.second);
            }

            return charcount;
        };

        auto map_word = [](const string& word){
            unordered_map<char, int> charmap;
            for (int i = 0; i < word.size(); ++i) {
                if (!charmap.count(word[i])) charmap.insert({word[i], 1});
                else charmap[word[i]]++;
            }

            return charmap;
        };

        if (word1.size() != word2.size()) {
            return false;
        }

        unordered_map<char, int> map1 = map_word(word1);
        unordered_map<char, int> map2 = map_word(word2);

        vector<int> count1 = extract_count(map1);
        vector<int> count2 = extract_count(map2);

        unordered_set<char> set1 = extract_key(map1);
        unordered_set<char> set2 = extract_key(map2);

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());

        return (count1 == count2 && set1 == set2);
    }
};

/* Optimized Solution
class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (char ch : word1) {
            freq1[ch - 'a']++;
        }

        for (char ch : word2) {
            freq2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0)) {
                return false;
            }
        }

        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }
};




*/