/*Input: [2,1,5]
Output: [5,5,0]*/


class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        ListNode*temp=head;
        while(temp!=NULL)
        {
          res.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v(res.size());
        stack<int>s;
        for(int i=0;i<res.size();i++)
        {
        while(!s.empty() && res[s.top()]<res[i])
        {
            v[s.top()]=res[i];
            s.pop();
            
        }
            s.push(i);
        }
        return v;
        
    }
};
