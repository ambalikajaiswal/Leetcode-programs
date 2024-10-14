/*Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       // bool loop=false;
        ListNode*fast=head;
        ListNode*slow=head;
        while(slow&&fast &&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
                return slow;
            }
        }
        
        return NULL;
    }
};

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow=head
        fast=head
        while slow and fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if slow==fast:
                return True
        return False
