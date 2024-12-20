class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int len=0;
        ListNode* temp=head;
        vector<int> ans;
        while(temp!=nullptr){
            len++;
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int j=len-n;
        ListNode* ret=nullptr;
        ListNode* cur=nullptr;
       for(int i=0;i<ans.size();i++){
         if(i!=j){
            ListNode* newnode=new ListNode(ans[i]);
            if(ret==nullptr){
                ret=newnode;
                cur=ret;
            }else{
                cur->next=newnode;
                cur=cur->next;
            }
         }
       }
        return ret;

    }
};