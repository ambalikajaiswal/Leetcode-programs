/*Input:
n = 5, k = 3
arr[][] = { {1, 1, 1, 1, 1},
            {2, 2, 2, 2, 2},
            {3, 3, 3, 3, 3},
            {4, 4, 4, 4, 4},
            {5, 5, 5, 5, 5},
         };
Output:
       18  18  18
       27  27  27
       36  36  36
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define n 5
void res(int m[][n],int k)
{
    if(k>n)
    return ;
    
    int s[n][n];
    for(int j=0;j<n;j++)
    {  int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=m[i][j];
            s[0][j]=sum;
        }
        
        for(int i=1;i<n-k+1;i++)
        {
            sum+=(m[i+k-1][j]-m[i-1][j]);
            s[i][j]=sum;
        }
    }
    
    
    for(int i=0;i<n-k+1;i++)
    {  int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=s[i][j];
        }
        cout<<sum<<" ";
        
        for(int j=1;j<n-k+1;j++)
        {
            sum+=(s[i][j+k-1]-s[i][j-1]);
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int mat[n][n] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5},
                    };
    int k = 3;
    res(mat, k);
    return 0;
}
