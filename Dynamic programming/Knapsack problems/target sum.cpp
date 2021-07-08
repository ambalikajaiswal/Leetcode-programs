/*Input: nums = [1,1,1,1,1], target = 3
Output: 5
Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.
-1 + 1 + 1 + 1 + 1 = 3
+1 - 1 + 1 + 1 + 1 = 3
+1 + 1 - 1 + 1 + 1 = 3
+1 + 1 + 1 - 1 + 1 = 3
+1 + 1 + 1 + 1 - 1 = 3
*/

class Solution {
public:
   int cnt(vector<int>&arr, int sum)
	{
       int N=arr.size();
      int t[N+1][sum+1];
        for(int i=0;i<=sum;i++)
        {   t[0][i]=0;
        }
            for(int i=0;i<=N;i++)
            {
                
                 t[i][0]=1;
            }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                
            
        
                 
              if(arr[i-1]<=j)
              {
                  t[i][j]=(t[i-1][j-arr[i-1]]+t[i-1][j])%1000000007;
              }
              else if(arr[i-1]>j)
              t[i][j]=t[i-1][j];
            }
        }
            
        
        return t[N][sum];
	}
	  
    int findTargetSumWays(vector<int>& nums, int target) {
       int s = 0, c, sum;  
    
    for(int i=0; i<nums.size(); i++)
        s += nums[i];
    
    if((target+s)%2 == 1)
        return 0;

    sum = (s + target) / 2;
    c = cnt(nums, sum);
    return c;       
    }
};
