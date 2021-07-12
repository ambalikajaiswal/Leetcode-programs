/*Input:
N = 3
arr[] = {1,2,3}
Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.*/

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if( n == 1 )
return 0;

if( arr[0] > arr[1] )
return 0;

if( arr[n-1] > arr[n-2] )
return n-1;
else
{

int l = 0 ;
int r = n-1 ;
int mid = l + ( r - l ) / 2;

while( l <= r )
{
mid = l + ( r - l ) / 2;

if( mid + 1 < n and mid -1 > 0 )
{
if( arr[mid-1] < arr[mid] and arr[mid] > arr[mid + 1 ])
return mid;
}

if( mid < n - 1 and arr[mid] < arr[mid + 1 ] )
l = mid+1;
else
r = mid-1;
}

return -1;
}
    }
};
