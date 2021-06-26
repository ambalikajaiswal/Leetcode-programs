/*Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".*/

class Solution {
	public:
	    int lcs(int x, int y, string s1, string s2)
    {
        int t[x+1][y+1];
        for(int i=0;i<=y;i++)
        {
            t[0][i]=0;
        }
        for(int j=0;j<=x;j++)
        {
            t[j][0]=0;
        }
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1] && i!=j) //i not qual to j
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[x][y];
    }
		int LongestRepeatingSubsequence(string s){
		   int n=s.length();
		   string a=s; 
		   int x=lcs(n,n,s,a); //lcs of the same string
		   return x;
		}

};
