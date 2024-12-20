
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int c=0;
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=nullptr){
            c++;
            if(c>=left&&c<=right){
                ans.push_back(temp->val);
            }
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        int k=0,it=0;
        ListNode* tep=head;
        while(tep!=nullptr){
            k++;
            if(k>=left&&k<=right){
                tep->val=ans[it++];
            }
            tep=tep->next;
        }
          return head;
    }
};