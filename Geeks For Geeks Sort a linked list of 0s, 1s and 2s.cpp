class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
    Node* zhead=new Node(-1);
    Node* ohead=new Node(-1);
    Node* thead=new Node(-1);
    Node* zero=zhead;
    Node* one=ohead;
    Node* two=thead;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
       else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
       else if(temp->data==2){
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
     zero->next=(ohead->next)?ohead->next:thead->next;
     one->next=thead->next;
     two->next=nullptr;
        head=zhead->next;
        delete(zhead);
        delete(ohead);
        delete(thead);
        return head;
    }
};
