/*Input:
2
5
5 5 4 6 4
5
9 9 9 2 5

Output:
4 4 5 5 6
9 9 9 2 5*/






#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//typedef pair<int,int>p;
 bool comp(pair<int,int> &a, pair<int,int>& b) //comparartor incase have same frequency then smaller will come first
{
if(a.first == b.first)
return a.second < b.second;
return a.first > b.first;
}
vector<int>res(int a[],int n)
{   vector<int>v;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(&comp)>maxH(comp); //implement comparartor in heap
    for(auto i=m.begin();i!=m.end();i++)
    {
        maxH.push({i->second,i->first});
    }
    //sort(maxH.begin(),maxH.end(),comp);
    while(maxH.size()>0)
    {
        int fre=maxH.top().first;
        int ele=maxH.top().second;
        for(int i=0;i<fre;i++)
        {
            v.push_back(ele);
            
        }
        maxH.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         vector<int>v=res(a,n);
         for(int i=0;i<n;i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<endl;
     }

	return 0;
}
