class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int t=ans[k-1];
        ans[k-1]=ans[ans.size()-k];
        ans[ans.size()-k]=t;
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
            newnode=newnode->next;
        }
        return ret;
    }
};