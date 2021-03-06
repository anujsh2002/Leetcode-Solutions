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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head,*slow=head;
        if(!head or !head->next) return NULL;
        while(fast and fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) break;
        }
        //if there is no cycle
        if(!fast or !fast->next) return NULL;
        
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};