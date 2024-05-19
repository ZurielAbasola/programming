#include <iostream>
#include <vector>

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        std::vector<int> sameParityPrefix(n, 0);

        for (int i = 1; i < n; ++i) {
            sameParityPrefix[i] = sameParityPrefix[i - 1] + (nums[i - 1] % 2 == nums[i] % 2 ? 1 : 0);
        }

        std::vector<bool> results;

        for (const auto& query : queries) {
            int from = query[0];
            int to = query[1];

            int sameParityCount = sameParityPrefix[to] - (from > 0 ? sameParityPrefix[from] : 0);
            results.push_back(sameParityCount == 0);
        }

        return results;
    }
};