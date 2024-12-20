class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       vector<int> nums;
        ListNode* temp=head;
        while(temp!=nullptr){                                                                   
            nums.push_back(temp->val);
            temp=temp->next;
        }
      vector<int> arr=nums;
        int n=nums.size();
        for(int i=0;i<arr.size();i++){
            int a=(i+k)%n;
        nums[a]=arr[i];
        }
        ListNode* ret =nullptr;
        ListNode* cur=nullptr;
        for(int i=0;i<nums.size();i++){
            ListNode* newnode=new ListNode(nums[i]);
            if(ret==nullptr){
                ret=newnode;
                cur=ret;
            }else{
                cur->next=newnode;
                cur=cur->next;
            }
        }
        return ret;
    }
};
