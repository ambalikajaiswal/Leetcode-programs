#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int peak(int arr[], int n)
    {
       if( n == 1 )
return 0;

if( arr[0] > arr[1] )
return 0;

if( arr[n-1] > arr[n-2] )
return n-1;
else
{

int l = 0 ;
int r = n-1 ;
int mid = l + ( r - l ) / 2;

while( l <= r )
{
mid = l + ( r - l ) / 2;

if( mid + 1 < n and mid -1 > 0 )
{
if( arr[mid-1] < arr[mid] and arr[mid] > arr[mid + 1 ])
return mid;
}

if( mid < n - 1 and arr[mid] < arr[mid + 1 ] )
l = mid+1;
else
r = mid-1;
}

return -1;
}
}
int asc(int a[],int s,int e,int x)
{
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(a[m]==x)
         return m;
        else if(x<a[m])
        {
            e=m-1;
        }
        else
         s=m+1;
    }
    return -1;
}
int dsc(int a[],int s,int e,int x)
{
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(a[m]==x)
         return m;
        else if(x<a[m])
        {
            s=m+1;
        }
        else
         e=m-1;
    }
    return -1;
}
int searchBitonic(int arr[], int n,
                int key)
{
    int ind=peak(arr,n);
    if (key > arr[ind])
        return -1;
 
    else if (key == arr[ind])
        return ind;
 
    else {
        int temp
            = asc(arr,0, ind - 1,key);
        if (temp != -1) {
            return temp;
        }
 
        // Search in right of k
        return dsc(arr,ind + 1,n - 1, key);
                                    
    }
}

int main()
{
    int arr[] = { -8, 1, 2, 3, 4, 5, -2, -3 };
    int key = 4;
    int n, l, r;
    n = sizeof(arr) / sizeof(arr[0]);
    l = 0;
    r = n - 1;
    
 
    // Function call
    
 
    int x = searchBitonic(arr, n, key);
 
    if (x == -1)
        cout << "Element Not Found" << endl;
    else
        cout << "Element Found at index " << x << endl;
 
    return 0;
}
