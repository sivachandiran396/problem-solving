
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        Node* temp=head;
        Node* de=nullptr;
        int c=0;
        while(temp!=nullptr){
            c++;
            if(c==x){
                if(x==1){
                    temp->next->prev=temp->prev;
                    head=temp->next;
                    delete(temp);
                    break;
                }
                if(temp->next==nullptr){
                    temp->prev->next=nullptr;
                    delete(temp);
                    break;
                }
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                de=temp;
                break;
            }
            temp=temp->next;
        }
        delete(de);
        return head;
    }
};
