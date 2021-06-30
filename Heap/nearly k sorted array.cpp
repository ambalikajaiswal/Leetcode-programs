/*Input:
2
3 3
2 1 3
6 3
2 6 3 12 56 8
Output:
1 2 3
2 3 6 8 12 56*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> res(int n,int k,int a[])
{   vector<int>v;
    priority_queue<int,vector<int>,greater<int>>minH;
    for(int i=0;i<n;i++)
    {
        minH.push(a[i]);
        if(minH.size()>k)
        {
            int f=minH.top();
            minH.pop();
        
           v.push_back(f);
        }
    }
    while(minH.size()>0)
    {
        v.push_back(minH.top());
        minH.pop();
    }
   //reverse(v.begin(),v.end());
    return v;
    
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   
	   vector<int>v=res(n,k,a);
	   //(v.begin(),v.end());
	   for(int i=0;i<n;i++)
	   {
	       cout<<v[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
