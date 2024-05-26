#include <vector>

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        if (nums.size() == 1) {
            return static_cast<double>(nums[0]);
        }

        int start = 0;
        int end = k;
        double avg = 0.0;
        for (int i = 0; i < k; ++i) {
            avg += static_cast<double>(nums[i]) / k;
        }

        double max_avg = avg;
        while (end < nums.size()) {
            avg -= static_cast<double>(nums[start]) / k;
            avg += static_cast<double>(nums[end]) / k;
            max_avg = max(max_avg, avg);
            start++;
            end++;
        }

        return max_avg;
    }
};