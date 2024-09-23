nput: nums = [4,5,2,1], queries = [3,10,21]
Output: [2,3,4]
Explanation: We answer the queries as follows:
- The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
- The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
- The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.

class Solution:
    def answerQueries(self, a: List[int], b: List[int]) -> List[int]:
        a.sort()
        l=[]
        for i in range(1,len(a)):
            a[i]+=a[i-1]
        for x in b:
            l.append(bisect.bisect_right(a,x))
        return l

  class Solution {
public:
    vector<int> answerQueries(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        vector<int>v;
        int n=a.size();
        for(int i=1;i<n;i++){
           a[i]+=a[i-1];
        }
        for(auto i:b){
           v.push_back(upper_bound(a.begin(),a.end(),i)-a.begin());
        }
        return v;
    }
};
