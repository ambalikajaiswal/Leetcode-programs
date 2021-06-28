#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nge(int a[],int n)
{
    vector<int>v;
    stack<pair<int,int>>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty() &&s.top().first>a[i])
        {
            v.push_back(s.top().second);
        }
        else if(!s.empty() &&s.top().first<=a[i])
        {
            while(!s.empty() &&s.top().first<=a[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else
            v.push_back(s.top().second);
        }
        s.push({a[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}
void count(int a[], int dp[], int n)
{
    
    vector<int>next(n);
    for(int i=0;i<n;i++)//initialize to 0;
    {
        next[i]=0;
    }
 
    
    next=nge( a, n); //fill with indices
 
    for (int i = n - 2; i >= 0; i--) {
 
        
        if (next[i] == -1) //if -1 then count 0
            dp[i] = 0;
 
       
        else
            dp[i] = 1 + dp[next[i]]; //increament the cnt
    }
}
int res(int dp[],int ind)
{
    return dp[ind];
}


int main()
{
    int a[] = {3, 4, 2, 7, 5, 8, 10, 6}  ;
    int n = sizeof(a) / sizeof(a[0]);
 
    int dp[n];
 
   
    count(a, dp, n);
 
    
    cout << res(dp, 0) << endl;
 
    
    cout << res(dp, 6) << endl;
 
    
    cout << res(dp, 1) << endl;
 
    return 0;
}

/*o/p=4,0,3
