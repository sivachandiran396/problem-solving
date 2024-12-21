class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head=new Node(arr[0]);
        Node* prev=head;
        for(int i=1;i<arr.size();i++){
            Node* newNode =new Node(arr[i]);
            newNode->prev=prev;
            prev->next=newNode;
            prev=newNode;
        }
        return head;
    }
};