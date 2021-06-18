/*Input: head = [1,2,3,4]
Output: [1,4,2,3]*/
//l1->ln-1->l2->ln-2....

class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*>res;
       // vector<int>v;
        ListNode *temp=head;
        while(temp!=NULL)
        {
          res.push_back(temp);
            temp=temp->next;
        }
        
        temp=head;
        int n=res.size();
        for(int i=0;i<n/2;i++)
            
        {
            temp->next=res[n-i-1];
            temp->next->next=res[i+1];
            temp=res[i+1];
        }
        temp->next=NULL;
    }
};
