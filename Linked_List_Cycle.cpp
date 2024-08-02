/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* nxt = head; //next check
        ListNode* prev = head; //previous check

        while (nxt != nullptr && nxt->next != nullptr) {
            nxt = nxt->next->next;
            prev = prev->next;

            if (nxt == prev) {
                return true;
            }
        }

        return false;   
    }
};
