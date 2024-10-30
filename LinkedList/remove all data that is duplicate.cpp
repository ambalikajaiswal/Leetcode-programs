Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val==temp->next->val){
                int data=temp->val;
                while(temp!=NULL && temp->val==data){
                ListNode*p=temp;
                temp=temp->next;
                delete p;
                
            }
            prev->next=temp;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        head=dummy->next;
        delete dummy;
        return head;
    }
};


class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy= ListNode(0)
        dummy.next=head
        prev=dummy
        temp=head

        while(temp is not None and temp.next is not None ):
            if temp.val==temp.next.val:
                data=temp.val
                while temp is not None and temp.val==data:
                    p=temp
                    temp=temp.next
                    del p
                prev.next=temp
            else:
                prev=temp
                temp=temp.next
        
        head=dummy.next
        del dummy
        return head
