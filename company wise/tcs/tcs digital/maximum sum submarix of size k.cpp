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
    
    int max_sum=INT_MIN,*pos=NULL;
    for(int i=0;i<n-k+1;i++)
    {  int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=s[i][j];
            if(max_sum<sum)
            {
                max_sum=sum;
                pos=&(m[i][0]);
            }
        }
        //cout<<sum<<" ";
        
        for(int j=1;j<n-k+1;j++)
        {
            sum+=(s[i][j+k-1]-s[i][j-1]);
            if(max_sum<sum)
            {
                max_sum=sum;
                pos=&(m[i][j]);
            }
        }
        
    }
    
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<*(pos+i*n+j)<<" ";
        }
        cout<<endl;
    }
    
}
int main ()
{
  int mat[n][n] = { {1, 1, 1, 1, 1},
  {2, 2, 2, 2, 2},
  {3, 8, 6, 7, 3},
  {4, 4, 4, 4, 4},
  {5, 5, 5, 5, 5},
  };
  int k = 3;

  cout << "Maximum sum 3 x 3 matrix is\n";
  res (mat, k);

  return 0;
}


output:
8 6 7
4 4 4
5 5 5
