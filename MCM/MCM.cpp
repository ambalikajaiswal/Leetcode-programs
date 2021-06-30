/*Input: N = 5
arr = {40, 20, 30, 10, 30}
Output: 26000
Explaination: There are 4 matrices of dimension 
40x20, 20x30, 30x10, 10x30. Say the matrices are 
named as A, B, C, D. Out of all possible combinations,
the most efficient way is (A*(B*C))*D. 
The number of operations are -
20*30*10 + 40*20*10 + 40*10*30 = 26000.*/

class Solution{
public:
int t[101][101];
    int solve(int a[],int i,int j)
    {   int mn=INT_MAX;
        if(i>=j)
        return 0;
        if(t[i][j]!=-1)
        return t[i][j];
        
        for(int k=i;k<=j-1;k++)
        {
            int temp=solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
            
            if(temp<mn)
            {
                mn=temp;
            }
        }
        return t[i][j]=mn;
    }
    int matrixMultiplication(int n, int a[])
    {
       memset(t,-1,sizeof(t));
       solve(a,1,n-1);
    }
};
