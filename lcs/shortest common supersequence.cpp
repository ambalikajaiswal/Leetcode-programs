/*Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.*/

class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(string &x, string& y, int m, int n)
    {
        int t[m+1][n+1];
        for(int i=0;i<=n;i++)
        {
            t[0][i]=0;
        }
        for(int i=0;i<=m;i++)
        {
            
            t[i][0]=0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        return (m+n-lcs(X,Y,m,n));
    }
};
