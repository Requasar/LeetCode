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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a=0;
        ListNode *result = new ListNode();
        ListNode *curr = result;
        while(l1 != nullptr || l2 != nullptr)
        {
            int sum = a + (l1 ? l1->val : 0) + (l2 ? l2->val : 0); //checking l1 and l2 nullptr or not before adding.

            if (sum >= 10) {
                curr->val = sum - 10; // if there is a carry situation.
                a = 1;
            } else {
                curr->val = sum;
                a = 0;
            }
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;

            if (l1 != nullptr || l2 != nullptr || a != 0) {
                curr->next = new ListNode();
                curr = curr->next;
            }
        }
        if (a > 0) {
            curr->val = a;
        }
        return result;
    }
};
