#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int i = 0; i < nums.size(); ++i) {
            total += nums[i];
        }

        if (total - nums[0] == 0) return 0;

        int l_sum = 0;
        for (int i = 1; i < nums.size(); ++i) {
            l_sum += nums[i - 1];
            int r_sum = total - l_sum - nums[i];

            if (l_sum == r_sum) return i;
        }

        return -1;
    }
};
