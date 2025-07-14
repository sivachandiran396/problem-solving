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
void check(ListNode* head,string &ans){
    if(head==nullptr) return ;
    while(head!=nullptr){
    int num=head->val;
    ans+=to_string(num);
    head=head->next;}
}
    int getDecimalValue(ListNode* head) {
        string ans;
        check(head,ans);
        int val=stoi(ans,nullptr,2);
        return val;
    }
};