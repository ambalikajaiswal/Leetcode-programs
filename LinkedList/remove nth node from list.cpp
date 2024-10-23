/*Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]*/


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) //base condition
        {
            return head;
        }
         ListNode* dummy = new ListNode(0,head);  //creating dummy node
         ListNode* fast = dummy; //creating two pointers
          ListNode* slow = dummy;
        while(n--) //moving node n times
        {
            fast = fast->next;
        }
         while(fast->next!=NULL)
        {
            fast = fast->next;
            slow= slow->next;
        }
        slow->next = slow->next->next; //removing nth node and assining last next to its next node
        //return dummy->next;           
        return dummy->next;
    }
};


class Solution {
public:
    int count(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        if(head==NULL)
        return NULL;
        int cnt=count(head);
        if(cnt==n){
            return head->next;
        }
        int x=cnt-n;
        for(int i=1;i<x;i++){
            temp=temp->next;
        }
        ListNode*p=temp->next;
        temp->next=p->next;


//python
        class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if n==0:
            return None
        fast=slow=head
        for i in range(n):
            fast=fast.next
        if not fast:
            return head.next
        while fast.next:
            slow=slow.next
            fast=fast.next
        slow.next=slow.next.next
        return head
        delete p;
        return head;
    }
};
