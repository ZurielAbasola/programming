#include <vector>

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        l_p = 0;
        r_p = k - 1;

        int sum = 0
        while (l_p < r_p) {
            int sum += nums[i];
        }

        double avg = sum / k;
        for (;r_p < nums.size(); ++r_p) {
            sum = sum + nums[r_p] - nums[r_p - k];

            if (sum / k > avg) {
                avg = sum / k;
            }

            
        }
    }
};