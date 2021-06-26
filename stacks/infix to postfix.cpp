/*Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-*/


class Solution
{
    public:
    int prec(char c)
    {
        if(c=='^')
        return 3;
        else if(c=='/')
        return 2;
        else if(c=='*')
        return 1;
        else if(c=='+'||c=='-')
        return -1;
        else
        return -2;
        
    }
    string infixToPostfix(string s)
    {
        string t;
        stack<int>p;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            
            if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
            {
                t.push_back(c);
            }
            else if(c=='(')
            {
                p.push('(');
            }
            else if(c==')')
            {
                while(p.top()!='(')
                {
                    t.push_back(p.top());
                    p.pop();
                }
                p.pop();
            }
            else {
                while(!p.empty() &&prec(s[i])<=prec(p.top()))
            {
                t.push_back(p.top());
                p.pop();
            }
            p.push(c);
        }
        }
        while(!p.empty())
        {
            t.push_back(p.top());
            p.pop();
        }
        return t;
    }
};
