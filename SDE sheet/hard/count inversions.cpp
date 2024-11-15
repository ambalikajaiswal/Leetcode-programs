//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int merge_s(vector<int> &a,int low,int m,int h){
        int n=a.size();
        int cnt=0;
        vector<int>t;
        int l=low;
        int r=m+1;
        while(l<=m &&r<=h){
            if(a[l]<=a[r]){
            t.push_back(a[l]);
            l++;
            }
            else{
                t.push_back(a[r]);
                cnt+=m-l+1;
                r++;
                
            }
        }
            while(l<=m){
                t.push_back(a[l]);
                l++;
            }
            while(r<=h){
                t.push_back(a[r]);
                r++;
            }
            
        for(int i=low;i<=h;i++){
            a[i]=t[i-low];
        }
        return cnt;
    }
    int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge_s(arr, low, mid, high);  // merging sorted halves
    return cnt;
}
    int inversionCount(vector<int> &a) {
        
        int n=a.size();
        return mergeSort(a,0,n-1);
        
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
