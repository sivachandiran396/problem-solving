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
    ListNode* reverseKGroup(ListNode* head, int k) {
       vector<int> arr;
       ListNode* temp=head;
       while(temp!=nullptr){
         arr.push_back(temp->val);
         temp=temp->next;
       } 
       vector<int> vec;
       vector<int> ans;
       for(int i=0;i<arr.size();i++){
        vec.push_back(arr[i]);
        if(vec.size()==k){
            reverse(vec.begin(),vec.end());
           for(int j=0;j<vec.size();j++){
            ans.push_back(vec[j]);
           }
           vec.clear();
        }
       }
       for(int j=0;j<vec.size();j++){
            ans.push_back(vec[j]);
           }
       ListNode* ret=nullptr;
       ListNode* cur=nullptr;
       for(int i=0;i<ans.size();i++){
        ListNode* newnode=new ListNode(ans[i]);
        if(ret==nullptr){
            ret=newnode;
            cur=ret;
        }
        else{
            cur->next=newnode;
            cur=cur->next;
        }
       }
       return ret;
    }
};