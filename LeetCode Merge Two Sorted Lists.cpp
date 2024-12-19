
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> ans;
        ListNode* temp = list1;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* tem = list2;
        while (tem != nullptr) {
            ans.push_back(tem->val);
            tem = tem->next;
        }
        sort(ans.begin(), ans.end());
        ListNode* ret = nullptr;
        ListNode* cur = nullptr;
        for (int i = 0; i < ans.size(); ++i) {
            ListNode* newNode = new ListNode(ans[i]);
            if (ret == nullptr) {
                ret = newNode;
                cur = ret;
            } else {
                cur->next = newNode;
                cur = cur->next;
            }
        }
        return ret;
    }
};
