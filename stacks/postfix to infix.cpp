#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is(char x)
{
    if(x=='^'||x=='/'||x=='*'||x=='+'||x=='-')
    return true;
  return false;
}

string res(string s)
{
    stack<string>t;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(is(s[i]))
        {
            string op1=t.top();
            t.pop();
            string op2=t.top();
            t.pop();
          string p="("+op2+s[i]+op1+")";
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
    string exp = "ab*c+";
    cout << res(exp);
    return 0;
}

/*o/p=((a*b)+c)
