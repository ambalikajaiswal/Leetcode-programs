class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        int n=a.size();
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        { 
            m[a[i]]++;

        }
        for(auto x:m)
        {
            if(x.second==2)
            {
                v.push_back(x.first);
            }
        }
        
       return v; 
    }
};
