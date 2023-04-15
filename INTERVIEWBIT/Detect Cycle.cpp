/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode *slow=A;
    ListNode *fast=A;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
          ListNode *head=A;   
          while(head!=slow)
          {
              head=head->next;
              slow=slow->next;
          }  
            return slow;
        }
    }
    return NULL;
}