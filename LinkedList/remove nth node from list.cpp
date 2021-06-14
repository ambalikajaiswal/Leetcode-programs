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
