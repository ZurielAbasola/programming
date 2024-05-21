/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode *ptr = head;
        while (ptr != nullptr) {
            ++count;
            ptr = ptr->next;
        }

        if (count == 1) {
            head = nullptr;
            return head;
        };

        int step = (count / 2) - 1;
        ptr = head;
        while (step > 0) {
            ptr = ptr->next;
            --step;
        }

        ListNode *curr = ptr;
        ptr = ptr->next;
        curr->next = ptr->next;

        return head;
    }
};