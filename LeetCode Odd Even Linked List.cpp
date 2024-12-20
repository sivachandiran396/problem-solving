class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int> odd;
        vector<int> even;
        int c=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            c++;
            if(c%2!=0){
                odd.push_back(temp->val);
            }else{
                even.push_back(temp->val);
            }
            temp=temp->next;
        }
        for(int i:even){
            odd.push_back(i);
        }
        ListNode* ret=nullptr;
        ListNode* cur=nullptr;
        for(int i=0;i<odd.size();i++){
            ListNode* newnode=new ListNode(odd[i]);
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