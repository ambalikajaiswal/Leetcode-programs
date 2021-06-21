/*Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1 */

class Solution {
public:
    int coinChange(vector<int>& coins, int w) {
        int n=coins.size();
        int t[n+1][w+1];
        for(int i=0;i<=w;i++)
        {
            t[0][i]=INT_MAX-1;
        }
        for(int j=0;j<=n;j++)
        {
            t[j][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(coins[i-1]<=j){
                    
                    t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
                }
                 else
                     t[i][j]=t[i-1][j];
                    
            }
        }
       if(t[n][w]==INT_MAX-1)
           return -1;
        return t[n][w];
    }
}; 
