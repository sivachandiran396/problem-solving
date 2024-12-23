class Solution {
public:
     int check(vector<int>& st,int val,int pos){
        int max=0,i=pos,cur=0;
          while(i<st.size()){
            if(val==st[i]&&cur==0){
                cur=-1;
                continue;
            }
            else if(val<st[i]&&cur==-1){
                 max=st[i];
                 break;
            }
            i++;
          }
          return max;
     }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int c=0;
        while(head!=nullptr){
            ans.push_back(check(arr,head->val,c));
            head=head->next;
            c++;
        }
        return ans;
    }
};