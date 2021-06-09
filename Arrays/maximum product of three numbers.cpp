class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int n=a.size();
       sort(a.begin(),a.end(),greater<int>());
        int f=a[n-1]*a[n-2]*a[0];
        int s=a[0]*a[1]*a[2];
        return max(f,s);
    }
};
