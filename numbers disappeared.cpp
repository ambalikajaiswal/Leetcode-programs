/*Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n=a.size();
        
       vector<int>v;
       map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0)
                v.push_back(i);
        }
        return v;
    }
};
