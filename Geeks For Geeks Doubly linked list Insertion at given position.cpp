class Solution {
  public:
    Node *addNode(Node *head, int pos, int data) {
        int c=0;
         Node* newNode= new Node(data);
        Node* temp=head;
        while(temp!=nullptr){
            if(c==pos) break;
            c++;
           temp=temp->next;
           
        }
        if(temp->next==nullptr){
            Node* pre=temp;
        newNode->prev=pre;
        newNode->next=pre->next;
        pre->next=newNode;
        }
        else{
        Node* pre=temp;
        newNode->prev=pre;
        pre->next->prev=newNode;
        newNode->next=pre->next;
        pre->next=newNode;
        }
        return head;
    }
};