/*Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*sh=NULL;
        ListNode*st=NULL;
        ListNode*gh=NULL;
        ListNode*gt=NULL;
          ListNode*temp=head;
        if(head==NULL)
            return NULL;
      
        while(temp!=NULL)
        {
            int val=temp->val;
            if(val<x)
            {
                if(sh==NULL)
                {
                  sh=temp;
                    st=temp;
                }
                else
                {
                    st->next=temp;
                    st=st->next;
                }
                
             }
            else if(val>=x)
            {
              if(gh==NULL)
              {
                  gh=temp;
                  gt=gh;
              }
                else
                {
                   gt->next=temp;
                    gt=gt->next;
                }
            }
            temp=temp->next;
        }
        if(st)
            st->next=gh;
        if(gt)
            gt->next=NULL;
        if(sh)
            return sh;
        else return gh;
        
    }
};

//easier approach

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*right=NULL;
        ListNode*left=NULL;
        ListNode*rhead=NULL;
        ListNode*lhead=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*temp=head;
        while(temp!=NULL){
            if(temp->val>=x){
                if(right==NULL){
                right=temp;
                rhead=right;
                }
                else{
                    right->next=temp;
                    right=right->next;
                }
            }
            else{
                if(left==NULL){
                    left=temp;
                    lhead=left;
                }
                else{
                    left->next=temp;
                    left=left->next;
                }
            }
            temp=temp->next;

        }
        if(left){
            left->next=rhead;
        }
        if(right){
            right->next=NULL;
        }
        if(lhead){
            return lhead;
        }
        return rhead;
    }
};
