/*Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3*/

class Solution
{
    public:
    int t[1001][1001];//global declare
    int answer(int W, int wt[], int val[], int n) 
    { 
        
       // memset(t,-1,sizeof(t));
       if(n==0||W==0)
       return 0;
       if(t[n][W]!=-1)
         return t[n][W];
       if(wt[n-1]<=W)
       {
           return t[n][W]=max(val[n-1]+answer(W-wt[n-1],wt,val,n-1),answer(W,wt,val,n-1));
       }
       
        return t[n][W]=answer(W,wt,val,n-1);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
        memset(t,-1,sizeof(t));//initialize all to -1
       answer(W,wt,val,n);
    }
};
