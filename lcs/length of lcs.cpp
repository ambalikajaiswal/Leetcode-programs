
/*Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.*/

class Solution
{
    int t[1001][1001];
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcsc(int x, int y, string &s1, string &s2)
    {
        
        if(x==0||y==0)
        return 0;
        if(t[x][y]!=-1)
        return t[x][y];
        
        if(s1[x-1]==s2[y-1])
        {
            return t[x][y]=1+lcsc(x-1,y-1,s1,s2);
        }
        else
        {
            return t[x][y]=max(lcsc(x-1,y,s1,s2),lcsc(x,y-1,s1,s2));
        }
    }
    int lcs(int x, int y, string s1, string s2)
    {
        memset(t,-1,sizeof(t));
        return lcsc(x,y,s1,s2);
       
    }
};

