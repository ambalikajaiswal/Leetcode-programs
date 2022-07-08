// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int l=0;
       int m=0;
       int h=n-1;
       while(m<=h)
       {
           if(a[m]==0)
           {
              swap(a[l],a[m]);
              l++;
              m++;
           }
           else if(a[m]==1){
             m++;
           }
           else 
           {
               swap(a[m],a[h]);
               
               h--;
           }
       }
    }
    
};

