/*Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.*/






class Solution{
  public:
    int cutRod(int price[], int n) {
        int len[n];
        for(int i=0;i<=n;i++)
        {
            len[i]=i+1;
        }
        int s=sizeof(len)/sizeof(int);
        int t[n+1][s+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                 t[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=s;j++)
            {
                
                if(len[i-1]<=j)
                {
                    t[i][j]=max(price[i-1]+t[i][j-len[i-1]],t[i-1][j]);
                }
                else
                 t[i][j]=t[i-1][j];
            }
        }
        return t[n][s];
    }
};
