/*Given two strings S1 and S2, find the number of times the second string occurs in the first string, whether continuous or discontinuous.


Example 1:

Input: 
S1 = geeksforgeeks
S2 = gks
Output: 4
Explaination: For the first 'g' there 
are 3 ways and for the second 'g' there 
is one way. Total 4 ways.*/

class Solution{
public:
int dp[501][501];
    int cnt(string s1,string s2,int i,int j)
    {
       if(j==s2.length())
       {
           return 1;
       }
       if(i>=s1.length())
       {
           return 0;
       }
       if(dp[i][j]!=-1)
       return dp[i][j];
       
       if(s1[i]==s2[j])
       {
           return dp[i][j]=cnt(s1,s2,i+1,j+1)+cnt(s1,s2,i+1,j);
       }
       else
       return dp[i][j]=cnt(s1,s2,i+1,j);
    }
    int countWays(string s1, string s2){
       memset(dp,-1,sizeof(dp));
       
       return cnt(s1,s2,0,0);
    }
};
