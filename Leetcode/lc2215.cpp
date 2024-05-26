#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> diff;
        vector<vector<int>> result(2);

        for (int num1 : nums1) {
            diff[num1] = 1;
        }
        for (int num2 : nums2) {
            if (diff[num2] == 0) {
                diff[num2] = 2;
            }
            else if (diff[num2] == 1) {
                diff[num2] = 3;
            }
        }

        for (auto num : diff) {
            if (num.second == 1) {
                result[0].push_back(num.first);
            }
            if (num.second == 2) {
                result[1].push_back(num.first);
            }
        }

        return result;
    }
};