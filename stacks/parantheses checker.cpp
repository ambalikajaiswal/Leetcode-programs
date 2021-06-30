/*Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.*/

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]==')')
            {
                if(s.empty()||s.top()!='(')
                return false;
                s.pop();
            }
            else if(x[i]=='}')
            {
                if(s.empty()||s.top()!='{')
                return false;
                s.pop();
            }
            else if(x[i]==']')
            {
                if(s.empty() || s.top()!='[')
                return false;
                s.pop();
            }
            else s.push(x[i]);
        }
        return s.empty();
    }

};
