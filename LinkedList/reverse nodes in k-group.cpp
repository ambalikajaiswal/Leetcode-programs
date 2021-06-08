/*Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]*/


class Solution {
public:
    int get(ListNode*head)
    {  int cnt=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(get(head)<k)
            return head;
        ListNode*temp=head;
        ListNode*prev=NULL;
         ListNode*next;
        
        int cnt=0;
        if(head==NULL||head->next==NULL)
            return head;
        if(k==1)
            return head;
        
        //if
       while(temp!=NULL &&cnt<k)
       {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
           cnt++;
            
        }
        if(next!=NULL)
            
        {
            
        
        head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};
