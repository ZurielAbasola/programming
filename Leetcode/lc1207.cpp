#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;
// TODO: solution review for problem 1207 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (auto num : arr) {
            mp[num]++;
        }

        unordered_set<int> st;
        for (auto x : mp) {
            st.insert(x.second);
        }

        return mp.size() == st.size();
    }
};
