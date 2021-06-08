class Solution {
public:
    void swap(int*a,int*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode*temp=head;
        while(temp!=NULL &&temp->next!=NULL)
        {
          swap(&temp->val ,  &temp->next->val);
              temp=temp->next->next;
        }
        return head;
    }
};
