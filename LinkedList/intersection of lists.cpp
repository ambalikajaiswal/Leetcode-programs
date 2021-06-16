/*Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.*/


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode * l1 = headA;
        ListNode * l2 = headB;
        while(l1 && l2) {
            if(l1==l2)
                return l1;
             l1= l1->next;
             l2= l2->next;
            if(l1 == NULL && l2 == NULL)
                return NULL;
            if(!l1)
                l1= headA;
             if(!l2)
                l2= headB;    
        }
        return NULL;
    }
};
