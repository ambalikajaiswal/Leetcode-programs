#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool is(string s,int l,int h)
{
    if(l==h)
    return true;
    while(l<=h)
    {
        if(s[l++]!=s[h--])
        {
            return false;
        }
    }
    
    return true;
}
void all(vector<vector<string>>&part,vector<string>&curr,int s,int n,string st)
{
    if(s>=n) //if start reaches end of string
    {
        part.push_back(curr);
        return;
    }
    for(int i=s;i<n;i++)
    {
        if(is(st,s,i)) //if palindrome
        {
            curr.push_back(st.substr(s,i-s+1));
            
            all(part,curr,i+1,n,st); //recur result
            
            curr.pop_back();//remove current str
        }
    }
}

void res(string s)
{  int n=s.size();
    vector<vector<string>>v;
    vector<string>t;
    all(v,t,0,n,s);
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
	string s="nitin";
	res(s);
	return 0;
}
