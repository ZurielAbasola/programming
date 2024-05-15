#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for (int step = 0; step < n; ++step) {
            if (nums[step] != 0) continue;

            for (int i = step + 1; i < n; ++i) {
                if (nums[i] != 0) {
                    int temp = nums[step];
                    nums[step] = nums[i];
                    nums[i] = temp;
                    break;
                }
            }
        }
    }
};