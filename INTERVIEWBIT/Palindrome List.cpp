/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 void reverse(ListNode* &head){
     ListNode* t = head;
     ListNode* p = NULL;
     ListNode* s;
     
     while(t){
         s = t->next;
         t->next = p;
         p = t;
         t = s;
     }
       head = p;
       return;    
 }
int Solution::lPalin(ListNode* head) {
   
    ListNode* s = head;
    ListNode* f = head->next;
   
    while(f && f->next){
        s = s->next;
        f = f->next->next;
    }
   
    ListNode* p = s->next;
    s->next = NULL;
    reverse(p);
    ListNode* t = head;
    while(t && p){
        if(t->val != p->val)
         return 0;
        t= t->next;
        p = p->next;
    }
    return 1;
   
}