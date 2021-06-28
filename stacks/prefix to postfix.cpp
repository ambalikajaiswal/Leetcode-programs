#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is(char x)
{
    if(x=='^'||x=='/'||x=='*'||x=='+'||x=='-')
    {
        return true;
    }
    return false;
}
string res(string s)
{
    stack<string>t;
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        
        if(is(s[i]))
        {
            string op1=t.top();
            t.pop();
            string op2=t.top();
            t.pop();
            
         string p=op1+op2+s[i];
         t.push(p);
        }
        else
        {
            t.push(string(1,s[i]));
        }
    }
    return t.top();
    
}

int main()
{
    string pre_exp = "*-A/BC-/AKL";
    cout << "Postfix : " << res(pre_exp);
    return 0;
}


/*o/p= Postfix : ABC/-AK/L-*  
