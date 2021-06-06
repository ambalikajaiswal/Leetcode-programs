//elements that occur more than n/3 times

class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n=a.size();
       unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
          m[a[i]]++;
        }
        for(auto x:m)
        {
          if(x.second>n/3)
          {
            v.push_back(x.first);
          }
        }
        return v;
    }
};
