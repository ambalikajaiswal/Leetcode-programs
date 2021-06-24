/*Input:
N = 5
Arr[] = {4, 2, 1, 5, 3}
Output:
2 1 -1 3 -1*/

class Solution{
public:	
	void immediateSmaller(int *a, int n) {
	    stack<int>s;
	    s.push(-1);
	   for(int i=n-1;i>0;i--)
	   {
	       if(a[i]<a[i-1])
	       {
	           s.push(a[i]);
	       }
	       else
	       s.push(-1);
	   }
	   for(int i=0;i<n;i++)
	   {
	       a[i]=s.top();
	       s.pop();
	   }
	}

};
