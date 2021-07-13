/*Input:
N = 1, M = 6
mat[][] = 18 21 27 38 55 67
X = 55
Output:
1
Explanation:
55 is present in the
matrix at 5th cell.*/

class Solution{
public:	
	int matSearch (vector <vector <int>> &a, int n, int m, int X)
	{
	   int i=0;
	   int j=m-1;
	   while(i>=0 &&i<n &&j>=0 &&j<m)
	   {
	       if(a[i][j]==X)
	        return 1;
	       else if(a[i][j]>X)
	        j--;
	       else if(a[i][j]<X)
	        i++;
	   }
	   return 0;
	}
};
