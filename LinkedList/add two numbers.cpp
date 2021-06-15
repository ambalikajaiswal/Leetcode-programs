class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode*temp=head;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        int carry=0;
        while(l1!=NULL||l2!=NULL)
        {
            int a=(l1!=NULL)?l1->val:0;
            int b=(l2!=NULL)?l2->val:0;
            int sum=(a+b)+carry;
            carry=sum/10;
            sum%=10;
            
            if(l1!=NULL)
            {
                l1->val=sum;
                temp->next=l1;
            }
            else if(l2!=NULL)
            {
                l2->val=sum;
                temp->next=l2;
            }
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        temp=temp->next;
            
        }
        if(carry!=0)
            temp->next=new ListNode(carry);
        return head->next;
    }
};
