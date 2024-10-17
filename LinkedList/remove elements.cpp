/*Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]*/


//remove all occurences of the values

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
        while(head!=NULL &&head->val==val)  
        {
            head=head->next;
        }
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL)
        {   if(temp->val==val){
            prev->next=temp->next;
            temp=temp->next;
        }
         else
         {
            prev=temp;
             temp=temp->next;
         }
        }
        return head;
        
    }
};


..python
    class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head is None:
            return None
        while head is not None and head.val==val:
            head=head.next
        temp=head
        prev=None
        while temp is not None:
            if temp.val==val:
                prev.next=temp.next
                temp=temp.next
            else:
                prev=temp
                temp=temp.next
        return head
