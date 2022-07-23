// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].


class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>v;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            v.push_back(pow(a[i],2));
        }
        sort(v.begin(),v.end());
        return v;
    }
};
