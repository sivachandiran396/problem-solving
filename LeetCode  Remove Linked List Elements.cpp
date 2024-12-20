class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        vector<int> ans;
        while(temp!=nullptr){
            if(temp->val!=val){
               ans.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* ret=nullptr;
        ListNode* cur=nullptr;
        for(int i=0;i<ans.size();i++){
            ListNode* newnode=new ListNode(ans[i]);
            if(ret==nullptr){
                ret=newnode;
                cur=ret;
            }else{
                cur->next=newnode;
                cur=cur->next;
            }
        }
        return ret;
    }
};