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

//python
class Solution:
    def swap(a,b):
        a,b=b,a

    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        while temp is not None and temp.next is not None:
            temp.val,temp.next.val=temp.next.val,temp.val
            temp=temp.next.next
        return head
