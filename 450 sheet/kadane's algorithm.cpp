// Input:
// N = 5
// Arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.

long long maxSubarraySum(int a[], int n){
        
        int max_sum=INT_MIN;
        int cur_sum=0;
        
        
        for(int i=0;i<n;i++)
        {
            cur_sum+=a[i];
            
            if(max_sum<cur_sum)
            {
                max_sum=cur_sum;
            }
            
            if(cur_sum<0)
            {
                cur_sum=0;
            }
        }
        return max_sum;
    }
