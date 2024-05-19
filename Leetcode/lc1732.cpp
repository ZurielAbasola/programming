#include <iostream>
#include <vector>

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;

        int result = 0;
        for (int i = 0; i < gain.size(); ++i) {
            result += gain[i];

            if (highest < result) {
                highest = result;
            }
        }

        return highest;
    }
};