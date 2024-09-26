/*Input:
N = 3
arr[] = {1,2,3}
Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.*/

class Solution {
public:
    int findPeakElement(vector<int>& a) {
       int n=a.size();
       if(n==1)
       return 0;
       if(a[0]>a[1]){
        return 0;
       }
       if(a[n-1]>a[n-2])
       return n-1;
       
        int l=1;
        int h=n-2;
        while(l<=h){
            int m=l+(h-l)/2;
           
                if(a[m]>a[m-1] && a[m]>a[m+1]){
                    return m;
                
            }
            else if(a[m-1]>a[m]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
         return -1; 
       
      
    }
};





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


