class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res;
        ListNode *dummy=new ListNode(-1);//dummy node created
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        res=dummy;
        
        while(l1!=NULL &&l2!=NULL)
        {
            if(l1->val<=l2->val)
            {
                res->next=l1;
                l1=l1->next;
            }
            else{
                res->next=l2;
                l2=l2->next;
            }
            res=res->next;
        }
        if(l1!=NULL)
        {
            res->next=l1;
        }
        if(l2!=NULL)
        {
            res->next=l2;
        }
        return dummy->next;
    }
};


//python
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head=ListNode()
        res=head
        while l1 and l2:
            if l1.val>l2.val:
                res.next=l2
                l2=l2.next
            else:
                res.next=l1
                l1=l1.next
            res=res.next
        res.next=l1 or l2
        return head.next
