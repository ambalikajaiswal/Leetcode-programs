//Input: head = [1,1,2]
//Output: [1,2]





class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL)
            return NULL;
        while(temp->next!=NULL)
        {
            if(temp->val==temp->next->val)
            {
                ListNode* p=temp->next;
                temp->next=p->next;
                delete p;
            }
            else
                temp=temp->next;
        }
        return head;
    }
};


python
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        temp=head
        if head is None:
            return None
        while temp.next:
            if temp.val==temp.next.val:
                temp.next=temp.next.next
            else:
                temp=temp.next
        return head
        
