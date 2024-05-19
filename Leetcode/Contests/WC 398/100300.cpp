#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;


        std::vector<std::vector<int>> digitCount(numDigits, std::vector<int>(10, 0));

        for (const int num : nums) {
            std::string numStr = std::to_string(num);
            for (int pos = 0; pos < numDigits; ++pos) {
                digitCount[pos][numStr[pos] - '0']++;
            }
        }

        long long totalSum = 0;
        for (int pos = 0; pos < numDigits; ++pos) {
            for (int digit = 0; digit < 10; ++digit) {
                int count = digitCount[pos][digit];
                if (count > 0) {
                    long long differentCount = n - count;
                    totalSum += static_cast<long long>(count) * differentCount;
                }
            }
        }

        return totalSum / 2;
    }
};