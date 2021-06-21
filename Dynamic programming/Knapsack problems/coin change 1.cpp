/*Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.*/






class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       long long int t[m+1][n+1];
       for(long long int i=0;i<=n;i++)
       {
           t[0][i]=0;
       }
           for(long long int j=0;j<=m;j++)
           {
               
                t[j][0]=1;
           }
       
       for(long long int i=1;i<=m;i++)
       {
           for(long long int j=1;j<=n;j++)
           {
               if(S[i-1]<=j)
               {
                   t[i][j]=t[i][j-S[i-1]]+t[i-1][j];
               }
               else
               t[i][j]=t[i-1][j];
           }
       }
       return t[m][n];
        
    }
};
