class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==nullptr||head->next==nullptr) return head;
       DLLNode* temp=head;
       DLLNode* pre=nullptr;
       while(temp!=nullptr){
           pre=temp->prev;
           temp->prev=temp->next;
           temp->next=pre;
           temp=temp->prev;
       }
       head=pre->prev;
       return head;
    }
};