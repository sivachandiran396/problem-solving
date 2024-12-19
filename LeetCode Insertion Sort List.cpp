class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
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
