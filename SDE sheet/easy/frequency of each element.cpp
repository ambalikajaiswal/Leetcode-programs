Input: n = 5, arr[] = [2, 3, 2, 3, 5], p = 5
Output: [0, 2, 2, 0, 1]

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& a, int n, int P) {
       unordered_map<int,int>m;
       
       for(int i=0;i<n;i++){
           m[a[i]]++;
       }
       
       for(int i=0;i<n;i++){
           a[i]=m[i+1];
       }
    }
};


\\pyython
def frequencyCount(self, arr, N, P):
        fre=[0]*N
        for num in arr:
            if 1<=num<=N:
                fre[num-1]+=1
        for i in range(N):
            arr[i]=fre[i]
