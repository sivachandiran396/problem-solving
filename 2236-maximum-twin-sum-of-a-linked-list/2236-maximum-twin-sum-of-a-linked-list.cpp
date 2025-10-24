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
    int pairSum(ListNode* head) {
        vector<int> vec;
        while(head!=nullptr){
            vec.push_back(head->val);
            head=head->next;
        }
      int sum=0,i=0,j=vec.size()-1;
      while(i<j){
        if((vec[i]+vec[j])>sum){
            sum=vec[i]+vec[j];
        }
        i++;
        j--;
      }
      return sum;
    }
};