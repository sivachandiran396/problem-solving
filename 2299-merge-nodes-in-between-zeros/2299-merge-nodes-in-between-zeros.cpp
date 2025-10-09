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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> vec;
        while (head != nullptr) {
            vec.push_back(head->val);
            head = head->next;
        }
        bool fz = false;
        int sum = 0;
        vector<int> ans;
        vector<int> other;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == 0) {
                if (!fz) {
                    fz = true;
                } else if (fz) {
                    other.clear();
                    ans.push_back(sum);
                    sum = 0;
                }
            } else {
                other.push_back(vec[i]);
                sum += vec[i];
            }
        }
        if (other.size() != 0) {
            ans.insert(ans.end(), other.begin(), other.end());
        }
        head=new ListNode(ans[0]);
        ListNode* temp=head;
        for(int i=1;i<ans.size();i++){
            ListNode* mover=new ListNode(ans[i]);
            temp->next=mover;
            temp=temp->next;
        }
        return head;
    }
};