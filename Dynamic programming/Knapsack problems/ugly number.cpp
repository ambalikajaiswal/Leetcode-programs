*/Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Example 1:

Input:
N = 10
Output: 12
Explanation: 10th ugly number is 12.*/
  
  class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull dp[n+1];
	    dp[1]=1; //first element 1
	    ull p2=1,p3=1,p5=1; //set indices
	    for(int i=2;i<=n;i++)
	    {
	    ull f2=2*dp[p2];
	    ull f3=3*dp[p3];
	    ull f5=5*dp[p5];
	    ull next=f2<f3?f2:f3;
	    next=next<f5?next:f5;
	    dp[i]=next;
	    if(next==f2)
	    {
	        p2++; //increment  indices
	    }
	    if(next==f3)
	    {
	        p3++;
	    }
	    if(next==f5)
	    {
	        p5++;
	    }
	    }
	    return dp[n];
	}
};
