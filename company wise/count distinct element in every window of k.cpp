/*Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3*/

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {  unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            m[a[i]]++;
        }
        v.push_back(m.size());
        for(int i=k;i<n;i++)
        {
            m[a[i-k]]--;
            if(m[a[i-k]]==0)
            {
                m.erase(a[i-k]);
            }
            m[a[i]]++;
            v.push_back(m.size());
        }
        return v;
    }
};
