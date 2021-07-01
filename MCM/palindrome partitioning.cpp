/*Input: str = "ababbbabbababa"
Output: 3
Explaination: After 3 partitioning substrings 
are "a", "babbbab", "b", "ababa".*/

class Solution{
public:
int t[501][501];
bool palin(string &st,int i,int j) //for checking plaindrome
{   int k=i;
    int s=j;
    if(k==s)
    return 1;
    while(k<s)
    {
        if(st[k++]!=st[s--])
        return false;
    }
    return true;
}
int solve(string &s,int i,int j)
{
    if(i>=j)
    return 0;
    if(palin(s,i,j)==true)
    return t[i][j]=0;
    if(t[i][j]!=-1)
    return t[i][j];
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        
        mn=min(mn,temp);
    }
    return t[i][j]=mn;
}
    int palindromicPartition(string s)
    {int n=s.length();
       memset(t,-1,sizeof(t));
       solve(s,0,n-1);
    }
};
