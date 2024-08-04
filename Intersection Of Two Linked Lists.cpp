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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *curr = headA;
        ListNode *curr2 = headB;
        vector<ListNode*> check;

        while(curr != nullptr) //traversal of headA node to put all values in vector to compare them later
        {
            check.push_back(curr);
            curr = curr -> next;
        }
        while(curr2 != nullptr) // traversal to compare values with headB
        {
            for(ListNode * a: check) //traversal in new vector check
            {
                if(curr2 == a)
                    return a;  
            }
            curr2 = curr2 ->next;
        }
        return nullptr;

    }
};
/*
    class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
		while(ptr1 != ptr2){
			if(ptr1 == NULL){
				ptr1 = headB;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = headA;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}
		return ptr1;
	}
};
*/
