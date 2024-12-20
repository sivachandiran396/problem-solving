class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        int n=lists.size();
        int i=0;
        while(n--){
            ListNode* temp=lists[i++];
            while(temp!=nullptr){
                ans.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode* ret=nullptr;
        ListNode* cur=nullptr;
        for(int j=0;j<ans.size();j++){
            ListNode* newnode=new ListNode(ans[j]);
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