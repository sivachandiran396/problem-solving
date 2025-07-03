// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* insert(int value, ListNode* head) {
        ListNode* newNode = new ListNode(value);
        if (!head) return newNode;
        ListNode* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
        return head;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        vector<int> vec;
        ListNode* temp = head;
        while (temp) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> ans;
        int l = 0, r = vec.size() - 1;
        while (l <= r) {
            if (l == r) ans.push_back(vec[l]);
            else {
                ans.push_back(vec[l]);
                ans.push_back(vec[r]);
            }
            l++;
            r--;
        }
        ListNode* newHead = nullptr;
        for (int val : ans) {
            newHead = insert(val, newHead);
        }
        temp = head;
        while (temp && newHead) {
            temp->val = newHead->val;
            temp = temp->next;
            newHead = newHead->next;
        }
    }
};
