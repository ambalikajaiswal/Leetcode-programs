/*print the lcs
input a:acbcf
b:abcdaf
out=abcf
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string lcs( int n,int m,string&x,string&y)
{
    int t[n+1][m+1];
    for(int i=0;i<=m;i++)
    {
        t[0][i]=0;
    }
        for(int i=0;i<=n;i++)
        {
            t[i][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        string s;
        int i=n,j=m;
        while(i>0 &&j>0)
        {
            if(x[i-1]==y[j-1]){
            s.push_back(x[i-1]);
            i--;
            j--;
            }
            else
            {
                if(t[i][j-1]>t[i-1][j])
                {
                    j--;
                }
                else
                i--;
            }
            
        }
        reverse(s.begin(),s.end());
        return s;
        
    }

int main()
{
  string a = "acbcf";
  string b = "abcdaf";
  int m = a.length();
  int n = b.length();
  cout<<lcs(m,n,a,b);
  return 0;
}
