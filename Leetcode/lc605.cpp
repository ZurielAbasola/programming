#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    	if (n == 0) {
            return true;
        }

        int count = 0;
        auto size = flowerbed.size();

        for (size_t i = 0; i < size; ++i) {
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1; 
                ++count;
            }
        }

        return count >= n;
    }
};