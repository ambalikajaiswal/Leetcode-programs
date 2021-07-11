#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int s,int h,int x) //for first occurence
{
    
    int res=-1;
    
    while(s<=h)
    {
      int m=s+(h-s)/2;
      if(a[m]==x)
      {
          res=m;
          h=m-1;
      }
      else if(x<a[m])
      {
          h=m-1;
      }
      else
      s=m+1;
    }
    return res;
}
int res(int a[],int n,int x)//for finding in infinite array
{
    int l=0;
    int h=1;
    while(x>a[h])
    {
        l=h;
        h=2*h;
    }
    return bs(a,l,h,x);
}

int main()
{
    int arr[9] = { 0, 0,0,0,0, 1, 1, 1, 1 };
    cout << "Index = "
         << res(arr,6,1);
    return 0;
}
