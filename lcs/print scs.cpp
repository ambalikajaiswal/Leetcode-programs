/*Input: str1 = "abac", str2 = "cab"
Output: "cabac"
Explanation: 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.*/

class Solution {
public:
     
    string shortestCommonSupersequence(string s1, string s2) {
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
                if(s1[i-1]==s2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        int i=x,j=y;
        string s;
        while(i>0 &&j>0)
        {
            if(s1[i-1]==s2[j-1])
            {
                s.push_back(s1[i-1]);
                i--;
                j--;
            }
            else
            {
               if(t[i][j-1]>t[i-1][j])
               {
                   s.push_back(s2[j-1]);
                   j--;
               }
                else 
                {
                  s.push_back(s1[i-1]);
                    i--;
                }
            }
            
        }
        while(i>0)
        {
          s.push_back(s1[i-1]);
        i--;
        }
        while(j>0)
        {
            s.push_back(s2[j-1]);
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
