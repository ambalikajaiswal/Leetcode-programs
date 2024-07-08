\\c++
  int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

//python sol:
import sys
class Solution:
    def print2largest(self, arr):
        INT_MIN=-sys.maxsize-1
        max=INT_MIN
        sec_max=INT_MIN
        n=len(arr)
        if n<2:
            return -1
        
        for i in range(len(arr)):
            if max<arr[i]:
                sec_max=max
                max=arr[i]
            elif sec_max<arr[i] and arr[i]!=max:
                sec_max=arr[i]
        return sec_max

