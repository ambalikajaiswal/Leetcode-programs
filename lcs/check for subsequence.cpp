/*a="AXY"
b="ADXCPY"
o/p=true */

class Solution {
	public:
	   


    bool isSubSequence(string s1, string s2) 
    {
        int x=s1.length();
        int y=s2.length();
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
                if(s1[i-1]==s2[j-1] )
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        int l=t[x][y];
        if(l==s1.length()) //if lcs ka length is equal to length of a string
          return true;
          else
          return false;
    }
};


//o(n) solution


class Solution{
    public:
    bool isSubSequence(string str1, string str2) 
    {
        int i = 0, j = 0;
        
        while(i < str1.size() and j < str2.size())
        {
            if(str1[i] == str2[j])
            {
                i++;
            }
            
            j++;
        }
        
        return i == str1.size();
    }
};
