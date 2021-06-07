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
