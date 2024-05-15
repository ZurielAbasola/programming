#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string res = "";
        for (int r = 0; r < numRows; r++) {
            int increment = 2 * (numRows - 1);

            for (int i = r; i < s.length(); i += increment) {
                res += s[i];

                if (r > 0 && r < (numRows - 1) && (i + increment - 2 * r) < s.length()) {
                    res += s[i + increment - 2 * r];
                }
            }
        }

        return res;
    }
};

int main() {
    string s;
    int numRows;
    Solution sol;

    cin >> s >> numRows;

    cout << sol.convert(s, numRows);

    return 0;
}
