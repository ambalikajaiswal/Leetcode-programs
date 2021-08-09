/*Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing 
number is 6.*/
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
         int ans = 1;
        
        sort(arr, arr+n);
        
        for(int i = 0; i < n; i++){
            if(arr[i] == ans) ++ans;
        }
        
        
        return ans;
    } 
};

