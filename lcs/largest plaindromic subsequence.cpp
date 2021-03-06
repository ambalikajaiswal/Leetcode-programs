/*Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".*/

class Solution {
public:
    int lcs(string &x,string &y, int n,int m)
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
        return t[n][m];
    }
    int longestPalindromeSubseq(string a) {
        int n=a.size();
        
       string b=a;
        reverse(b.begin(),b.end());
                        
        int l=lcs(a,b,n,n);
        return l;
    }
};
