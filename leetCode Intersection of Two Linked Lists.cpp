class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, bool> mp; 
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while (temp1 != nullptr) {
            mp[temp1] = true; 
            temp1 = temp1->next;
        }
        while (temp2 != nullptr) {
            if (mp.find(temp2) != mp.end()) {
                return temp2; 
            }
            temp2 = temp2->next;
        }

        return nullptr; 
    }
};
