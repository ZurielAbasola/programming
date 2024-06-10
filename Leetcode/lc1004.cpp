#include <climits>
#include <vector>

using namespace std;
// TODO: Solution review for problem 1004
class Solution {
public:
  int longestOne(vector<int>& nums, int k){
    int l_p = 0, r_p = 0;
    while (r_p < nums.size()){
      if (nums[r_p] == 0) {
        k--;
      }
      if (k < 0){
        if (nums[l_p] == 0){
          k++;
        }
        l_p++;
      }
      r_p++;
    }

    return r_p - l_p;
  }
};
