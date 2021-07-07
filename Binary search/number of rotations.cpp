/*Input:
N = 5
Arr[] = {5, 1, 2, 3, 4}
Output: 1
Explanation: The given array is 5 1 2 3 4. 
The original sorted array is 1 2 3 4 5. 
We can see that the array was rotated 
1 times to the right.*/

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   int start = 0;
int end = n-1;



if(arr[start] < arr[end]) return 0;

while(start <= end)
{
int mid = start + ((end-start)/2);
int prev = (mid+n-1)%n; //if mid is first element
int next = (mid+1)%n; //if mid is the last element

if(arr[mid] <= arr[prev] && arr[mid] <= arr[next])
return mid;

else if(arr[mid] > arr[end])
start = mid+1; //cuz given an ascending
else if(arr[mid] < arr[end])
end = mid-1; //order
}
return 0;

	}

};
