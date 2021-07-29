/*Given an array Arr of size N containing positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

Example 1:

Input:
N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
Output: 110
Explanation: If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.*/

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *a, int n) {
	  if(n==1)
	  return a[0];
	  if(n==2)
	  return max(a[0],a[1]);
	  int d=a[0];
	  int b=max(a[0],a[1]);
	  int c;
	  for(int i=2;i<n;i++)
	  {
	      c=max(b,d+a[i]);
	      d=b;
	      b=c;
	  }
	  return c;
	}
};
