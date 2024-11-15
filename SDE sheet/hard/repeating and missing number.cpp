//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& a) {
        long long n= a.size();
         long long s = (n * (n + 1)) / 2;
         long long q = (n * (n + 1) * (2 * n + 1)) / 6;
        long long s1=0;
        long long s2=0;
        for(int i=0;i<n;i++){
            s1+=a[i];
            s2+=(long long)a[i]*(long long)a[i];
        }
        
        long long val1=s1-s;
        long long val2=s2-q;
        
        val2=val2/val1;
        
        long long x=(val2+val1)/2;
        long long y=x-val1;
        
        return{(int)x,(int)y};
        
        
    }
};

