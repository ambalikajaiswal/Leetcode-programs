/*nums = {1,1,1,2,2,3},
k = 2
Output: {1, 2}*/

class Solution {
  public:
    vector<int> topK(vector<int>& a, int k) {
        vector<int>v;
        int n=a.size();
       unordered_map<int,int>m;//store frequency
       for(int i=0;i<n;i++)
       {
           m[a[i]]++;
       }
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minH; //min heap
       for(auto i=m.begin();i!=m.end();i++)
       {
           minH.push({i->second,i->first});//push frequenct then a[i]
           if(minH.size()>k)
           {
              minH.pop(); 
           }
       }
       while(minH.size()>0)
       {
           v.push_back(minH.top().second);
           minH.pop();
       }
       reverse(v.begin(),v.end());
       return v;
    }
};
