/*Input: S1 = "ABCDGH", S2 = "ACDGHR"
Output: 4
Explanation: The longest common substring
is "CDGH" which has length 4.*/

class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int t[n+1][m+1];
        int res=0;
        for(int i=0;i<=m;i++)
        {
            t[0][i]=0;
        }
        for(int j=0;j<=n;j++)
        {
            t[j][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                    res=max(res,t[i][j]);
                }
                else
                t[i][j]=0;
            }
        }
        return res;
    }
};
