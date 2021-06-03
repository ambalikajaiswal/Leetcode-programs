class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            v.push_back(a[i]);
        } 
        for(int i=0;i<n;i++)
        {
            
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        int t=v.size();
        for(int i=0;i<t;i++)
        {
            a[i]=v[i];
        }
        
    }
};
