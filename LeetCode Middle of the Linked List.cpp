class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         int len=0;
         ListNode* temp=head;
         while(temp!=nullptr){
            len++;
            temp=temp->next;
         }
          int c=0;
          while(head!=nullptr){
            if(c==(len/2)){
                break;
            }
            c++;
            head=head->next;
          }
         return head;
    }
};