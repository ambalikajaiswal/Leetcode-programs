//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        int cnt=0;
        int sqr =sqrt(N);
        
        for(int i=1;i<=sqr;i++){
            if(N%i==0){
                cnt++;
                
                if(i!=N/i){
                    cnt++;
                }
            }
        }
        if(cnt==2)
           return 1;
        else
           return 0;
    }
};


