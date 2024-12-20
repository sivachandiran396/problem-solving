class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        map<int,int> mp;
        while(temp!=nullptr){
           mp[temp->val]+=1;
            temp=temp->next;
        }
        ListNode* ret=nullptr;
        ListNode* cur=nullptr;
        for(auto i:mp){
            if(i.second==1){
           ListNode* newnode=new ListNode(i.first);
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