#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        for (int step = 0; step < n; ++step) {
            if (nums[step] != 0) continue;

            for (int i = step; i < n - 1; ++i) {
                if (nums[i + 1] != 0) {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }
        }
    }
};