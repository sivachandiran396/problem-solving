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
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* cur=dummy;
        int c=0;
        while(t1!=nullptr || t2!=nullptr){
           int sum=c;
           if(t1!=nullptr) sum+=t1->val;
           if(t2!=nullptr) sum+=t2->val;
           ListNode* newnode=new ListNode(sum%10);
           c=sum/10;
           cur->next=newnode;
           cur=cur->next;
           if(t1!=nullptr) t1=t1->next;
           if(t2!=nullptr) t2=t2->next;
        }
        if(c) {
            ListNode* newn=new ListNode(c);
            cur->next=newn;
    }
    return dummy->next;
    }
};