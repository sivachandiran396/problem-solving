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
    ListNode* removeNodes(ListNode* head) {
        ListNode* t = head;
        vector<int> vec;
        while (t != nullptr) {
            vec.push_back(t->val);
            t = t->next;
        }
        vector<int> ans(vec.size(), -1);
        ans[ans.size() - 1] = vec[vec.size() - 1];
        int max = vec[vec.size() - 1];
        for (int i = vec.size() - 2; i >= 0; i--) {
            if (vec[i] > max) {
                max = vec[i];
                ans[i] = max;
            } else {
                ans[i] = max;
            }
        }
        vector<int> list;
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == vec[i]) {
                list.push_back(ans[i]);
            }
        }
        ListNode* h = new ListNode(list[0]);
        ListNode* tem = h;
        for (int i = 1; i < list.size(); i++) {
            ListNode* mover = new ListNode(list[i]);
            tem->next = mover;
            tem = tem->next;
        }
        return h;
    }
};