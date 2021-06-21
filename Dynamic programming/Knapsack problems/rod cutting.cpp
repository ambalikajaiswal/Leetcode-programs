/*N = 8
Price[] = {1, 5, 8, 9, 10, 17, 17, 20}
Output:
22
Explanation:
The maximum obtainable value is 22 by
cutting in two pieces of lengths 2 and 
6, i.e., 5+17=22.*/
class Solution{
  public:
    int cutRod(int price[], int n) {
        int len[n];   //since length array not given so create one
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
