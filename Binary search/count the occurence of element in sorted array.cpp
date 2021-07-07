/*Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.*/




class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int left(int a[],int n,int x)
	{
	    int l=0;
	    int h=n-1;
	    int res=-1;
	    while(l<=h)
	    {
	        int m=l+(h-l)/2;
	        if(x==a[m])
	        {
	            res=m;
	            h=m-1;
	        }
	        else if(x<a[m])
	        {
	            h=m-1;
	        }
	        else
	        l=m+1;
	    }
	    return res;
	}
	int right(int a[],int n,int x)
	{
	    int l=0;
	    int h=n-1;
	    int res=-1;
	    while(l<=h)
	    {
	        int m=l+(h-l)/2;
	        if(x==a[m])
	        {
	            res=m;
	            l=m+1;
	        }
	        else if(x<a[m])
	        {
	            h=m-1;
	        }
	        else
	        l=m+1;
	    }
	    return res;
	}
	
	int count(int a[], int n, int x) {
	    int z=left(a,n,x);
	    int y=right(a,n,x);
	    if(z==-1 &&y==-1) //if element not present
	    return 0;
	    else
	    return y-z+1;
	}
};
