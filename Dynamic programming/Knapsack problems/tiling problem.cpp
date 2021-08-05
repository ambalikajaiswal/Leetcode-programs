/*Input:
W = 3
Output:
3
Explanation:
We need 3 tiles to tile the board
of size  2 x 3. 
We can tile in following ways:
1) Place all 3 tiles vertically. 
2) Place first tile vertically.
and remaining 2 tiles horizontally.
3) Place first 2 tiles horizontally
and remaining tiles vertically.*/





class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int t[n+2];
        t[0]=0;
        t[1]=1;
        for(int i=2;i<=n;i++)
        {
            t[i]=(t[i-1]+t[i-2])%1000000007;
        }
        return t[n];
    }
};
