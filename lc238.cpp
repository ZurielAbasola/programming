#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> static productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i -1];
        }

        for (int i = 0; i < n; ++i) {
            result[i] = left[i] * right[i];
        }

        return result;
    }
};

int main() {
    int n;
    vector<int> nums;
    vector<int> result;

    while (cin >> n) {
        nums.push_back(n);
    }

    result = Solution::productExceptSelf(nums);

    while (!result.empty()) {
        cout << result.back();
        result.pop_back();
    }
}

