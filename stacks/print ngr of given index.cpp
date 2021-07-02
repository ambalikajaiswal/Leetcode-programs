/*arr[] = {3, 4, 2, 7, 5, 8, 10, 6} 
        query indexes = {3, 6, 1}
Output: 8 -1 7 */









#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int res(int a[],int n,int ind)
{   
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty()&&s.top()>a[i])
        {
            v.push_back(s.top());
        }
        else if(!s.empty() &&s.top()<=a[i])
        {
            while(!s.empty() &&s.top()<=a[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            v.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    return v[ind];
    
}


int main()
{
 
    int a[] = {3, 4, 2, 7,
               5, 8, 10, 6 };
 
    int n = sizeof(a) / sizeof(a[0]);
 int index=3;
    
    cout << res(a,  n, 3) << " ";
    cout<<res(a,n,2);
    cout<<res(a,n,6);
    return 0;
 
   
}
