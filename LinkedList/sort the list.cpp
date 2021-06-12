class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>res;
      ListNode *temp=head;
        while(temp!=NULL)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        sort(res.begin(),res.end());
        temp=head;
        for(int i=0;i<res.size();i++)
        {
            temp->val=res[i];
            temp=temp->next;
        }
        return head;
    }
};
