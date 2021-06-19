/*Input: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
Output: 3
Explanation: {2, 3, 5}, {2, 8}, {10}*/

class Solution{

	public:
	int perfectSum(int arr[], int N, int sum)
	{
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
            for(int j=1;j<=sum;j++)
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
	  
};
