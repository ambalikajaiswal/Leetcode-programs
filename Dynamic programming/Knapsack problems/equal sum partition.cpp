/*Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explaination: 
The two parts are {1, 5, 5} and {11}.*/


class Solution{
public:
 bool isSubsetSum(int N, int arr[], int sum){
         int t[N+1][sum+1];
        for(int i=0;i<=sum;i++)
        {   t[0][i]=false;
        }
            for(int i=0;i<=N;i++)
            {
                
                 t[i][0]=true;
            }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                
            
        
                 
              if(arr[i-1]<=j)
              {
                  t[i][j]=(t[i-1][j-arr[i-1]]||t[i-1][j]);
              }
              else
              t[i][j]=t[i-1][j];
            }
        }
            
        
        return t[N][sum];
    }
    int equalPartition(int n, int a[])
    {
       int sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=a[i];
       }
       if(sum%2!=0)
          return 0;
      return isSubsetSum(n,a,sum/2);
    
    }
};
