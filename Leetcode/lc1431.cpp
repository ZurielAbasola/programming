#include <vector>

using namespace std;
// TODO: Solution review for leetcode problem 1431
class Solution {
public:
	vector<bool> kidsWithCandies (vector<int>& candies, int extraCandies) {
		vector<bool> result;
		int max = *max_element(candies.begin(), candies.end());

		for (auto itr = candies.cbegin(); itr != candies.end(); ++itr) {
			if (*itr + extraCandies >= max) {
				result.push_back(true);
			} else {
				result.push_back(false);
			}
		}

		return result;
	}
};
