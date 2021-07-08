#include<iostream>
#include<bits/stdc++.h>

int bs(int a[],int n,int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(x==a[m])
        return m;
        if(m>=l &&x==a[m-1]==x) //search in mid-1
          return m-1;
        if(m<=h &&a[m+1]==x)//mid+1
         return m+1;
        if(x<a[m])
        {
           h=m-2; //since m-1 and m+1 included move the pointer 2 points 
        }
        else
        l=m+2;
    }
    return -1;
}
using namespace std;
int main()
 {
	int n=5;
	int a[5]={5,10,30,20,40};
	int k=40;
cout<<bs(a,n,k)+1;
	
	return 0;
}
