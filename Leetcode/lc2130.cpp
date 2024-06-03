#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> values;
        ListNode *curr = head;

        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }

        int maxsum = INT_MIN;
        int n = values.size();

        for (int i = 0; i < n / 2; ++i) {
            int currsum = values[i] + values[n - 1 - i];

            maxsum = currsum > maxsum ? currsum : maxsum;
        }

        return maxsum;
    }
};