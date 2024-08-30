// Input: a = 5 , b = 10
// Output: 10 5
// Explanation: LCM of 5 and 10 is 10, while their GCD is 5.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        vector<long long>v;
        long long c=gcd(a,b);
        long long d=lcm(a,b);
        v.push_back(d);
        v.push_back(c);
        return v;
        
    }
    
    long long gcd(long long a , long long b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b; //keep replacing a with remainder
            }
            else if(b>a){
                b=b%a;
            }
        }
        if(a==0)
          return b;
        else
          return a;
    }
    
    long long lcm(long long a , long long b){
        return(a*b/gcd(a,b));
    }
};

