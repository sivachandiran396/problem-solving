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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        vector<int> arr1;
        vector<int> arr2;
        while (t1 != nullptr || t2 != nullptr) {
            if (t1 != nullptr) {
                arr1.push_back(t1->val);
                t1 = t1->next;
            }
            if (t2 != nullptr) {
                arr2.push_back(t2->val);
                t2 = t2->next;
            }
        }
        vector<int> ans;
        int c = 0;
        int n = arr1.size() - 1, m = arr2.size() - 1;
        while (n >= 0 || m >= 0) {
            int sum = c;
            if (n >= 0) {
                sum += arr1[n];
                n--;
            }
            if (m >= 0) {
                sum += arr2[m];
                m--;
            }
            ans.push_back(sum % 10);
            c = sum / 10;
        }
        if(c!=0){
            ans.push_back(c);
        }
        reverse(ans.begin(), ans.end());
        ListNode* ret = nullptr;
        ListNode* cur = nullptr;
        for (int i = 0; i < ans.size(); i++) {
            ListNode* newnode = new ListNode(ans[i]);
            if (ret == nullptr) {
                ret = newnode;
                cur = ret;
            } else {
                cur->next = newnode;
                cur = cur->next;
            }
        }
        return ret;
    }
};