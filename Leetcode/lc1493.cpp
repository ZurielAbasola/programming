#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int longestSubarray(vector<int>& nums) {
    int l_p = 0, r_p = 0;
    
    int zeros = 0;
    int ans = 0;
    while (r_p < nums.size()) {
     if (nums[r_p] == 0) zeros++;

      while (zeros > 1) {
        if (nums[l_p] == 0) {
          zeros--;
        }
        l_p++;
      }
      ans = max(ans, r_p - l_p + 1 - zeros);
      r_p++;
    }

    return (ans == nums.size()) ? ans - 1 : ans;
  }
};
