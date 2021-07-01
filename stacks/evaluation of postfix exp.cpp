/*Input: S = "123+*8-"
Output: -3
Explanation:
After solving the given postfix 
expression, we have -3 as result.*/

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {   int n=s.length();
        stack<int>t;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                t.push(s[i]-'0');
            }
            else
            {
                int s1=t.top();
                t.pop();
                int s2=t.top();
                t.pop();
                if(s[i]=='*')
                {
                    t.push(s1*s2);
                }
                else if(s[i]=='/')
                {
                    t.push(s2/s1);
                }
                else if(s[i]=='+')
                {
                    t.push(s1+s2);
                }
                else if(s[i]=='-')
                {
                    t.push(s2-s1);
                }
            }
        }
        return t.top();
    }
};
