/*
input=1,3,2,4
output=-1,-1,3,-1*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        stack<int>s;
        vector<int>v;
        for(int i=0;i<a.size();i++)
        {
          if(s.empty())
          {
            v.push_back(-1);
          }
            else if(!s.empty() &&s.top()>a[i]){
                v.push_back(s.top());
            }
            else if(!s.empty() &&s.top()<=a[i])
            {
                while(!s.empty() &&s.top()<=a[i])
                {
                    s.pop();
                }
                if(s.empty())
                    v.push_back(-1);
                else
                    v.push_back(s.top());
            }
            s.push(a[i]);
        }
      
           return v;
    }
};
