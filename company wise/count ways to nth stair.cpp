/*/*There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does not matter).

Note:
Order does not matter means for n = 4 {1 2 1},{2 1 1},{1 1 2} are considered same.
 

Example 1:

Input: N = 4
Output: 3
Explanation: Three ways to reach at 4th stair.
They are {1, 1, 1, 1}, {1, 1, 2}, {2, 2}.*/

class Solution{
	public:
		int nthStair(int n){
		    vector<int>dp(n+1,0);
		    dp[0]=1;
		    for(int i=1;i<=2;i++)
		    {
		        for(int j=i;j<=n;j++)
		        {
		            dp[j]+=dp[j-i];
		        }
		    }
		    return dp[n];
		}
};


or
  
  int nthStair(int n){
  return 1+n/2;
}
