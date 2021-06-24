/*Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.*/

class Solution{
		

	public:
	int lcs(string &x, string& y, int m, int n)
    {
        int t[m+1][n+1];
        for(int i=0;i<=n;i++)
        {
            t[0][i]=0;
        }
        for(int i=0;i<=m;i++)
        {
            
            t[i][0]=0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
	int minOperations(string str1, string str2) 
	{ 
	   int m=str1.length();
	   int n=str2.length();
	   int x=m-lcs(str1,str2,m,n);
	   int y=n-lcs(str1,str2,m,n);
	   return(x+y);
	} 
};
