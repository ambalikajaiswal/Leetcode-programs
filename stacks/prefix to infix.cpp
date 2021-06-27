#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool is(char x)
{
    if(x=='^'||x=='*'||x=='/'||x=='+'||x=='-')
      return true;
     return false;
}
string res(string st)
{
    stack<string>s;
    int n=st.length();
    for(int i=n-1;i>=0;i--)
    {
        if(is(st[i]))
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            
            string t="("+op1 + st[i] +op2 + ")";
            s.push(t);
        }
        else
        {
            s.push(string(1,st[i]));
        }
    }
    return s.top();
}

int main() {
  string pre_exp = "*-A/BC-/AKL";
  cout << "Infix : " << res(pre_exp);
  return 0;
}


/*o/p=Infix : ((A-(B/C))*((A/K)-L))
