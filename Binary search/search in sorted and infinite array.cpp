#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(a[m]==x)
        return m;
        else if(a[m]<x)
        {
            l=m+1;
        }
        else
         h=m-1;
    }
    return -1;
}
int res(int a[],int n,int k)
{
    int l=0;
    int h=1;
    while(k>a[h])
    {
        l=h;//l becomes h
        h=2*h; //keep moving h twice
    }
    return bs(a,n,k); //when key lies between l and h return index
}

int main()
{
    int a[11] = {3, 5, 7, 9, 10, 90, 100, 130,
                               140, 160, 170};
    int k=170;
    cout<<res(a,11,k);
    return 0;
}
