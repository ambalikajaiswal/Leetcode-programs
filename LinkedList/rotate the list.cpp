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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)return head;
        
        //ListNode *temp=head;
        ListNode*cur=head;
        int size=get(head);
        if(k>=size)
        {
              k = k%size;
        }
       
       cur=head;
    //take remainder when k is greater than length
    k=k%size;
    //we need to iterate k times from head node to reach kth node from right end.
    k=size-k;
    //int index=1;
        
        
       
    int index=1;
    //iterate till we reach the kth node from left side(from head node)
    while(index!=k && cur!=nullptr)
    {
        ++index;
        cur=cur->next;
    }
	
        //if(cur==NULL)
            //return head;
        
        ListNode *kth=cur;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
       cur->next=head;
        
        head=kth->next;
        kth->next=NULL;
        return head;
    }
};
