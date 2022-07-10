#include <bits/stdc++.h>
using namespace std;

void move(int a[],int n)
{
    int *b=new int[n];
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[l++]=a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            b[l++]=a[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	move(a,n);
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}


method 2
  
  #include <bits/stdc++.h>
using namespace std;

void move(int a[],int n)
{
    int h=n-1;
    int l=0;
    while(l<=h)
    {
    if(a[l]<0)
    {
     l++;
     }
     else if(a[h]>0)
     {
     h--;
     }
     else
     {
     swap(a[l],a[h]);
     
     }
     }
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	move(a,n);
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
