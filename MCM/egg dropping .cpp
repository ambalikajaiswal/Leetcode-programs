/*Input:
N = 2, K = 10
Output: 4*/

class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int t[202][202];
    int solve(int n,int k)
    {
        if(n==1)
        return t[n][k]=k;
        else if(k==1||k==0)
        return t[n][k]=k;
        else if(t[n][k]!=-1)
        return t[n][k];
        int mn=INT_MAX;
        int temp=0;
        for(int i=1;i<=k;i++)
        {
            temp=1+max(solve(n-1,i-1),solve(n,k-i));
            mn=min(mn,temp);
        }
        return t[n][k]=mn;
    }
    int eggDrop(int n, int k) 
    {
        memset(t,-1,sizeof(t));
        return solve(n,k);
    }
};
