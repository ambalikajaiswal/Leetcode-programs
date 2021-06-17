/*Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6 */


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        vector<int>v;
        for(int i=0;i<lists.size();i++)
        {
            ListNode*head=lists[i];
           while(head!=NULL)
           {
               v.push_back(head->val);
               head=head->next;
           }
            
        }
        sort(v.begin(),v.end());
        ListNode*head=NULL,*temp;
        
        for(int i=0;i<v.size();i++)
        {
            ListNode* h=new ListNode();
            h->val=v[i];
            h->next=NULL;
            if(head==NULL)
            {
                head=temp=h;
            }
            else
            {
                temp->next=h;
                temp=h;
                
            }
            
        }
        return head;
        
    }
};
