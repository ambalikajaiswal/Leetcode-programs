Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]

  class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>v;
        long long ans=1;
        for(int i=0;i<=n;i++){
            v.push_back(ans);
            ans= (n-i)*ans/(i+1);
        }
        return v;
    }
};

lass Solution:
    def getRow(self, n: int) -> List[int]:
        v=[1]
        prev=1
        for i in range(1,n+1):
            next_=(n-i+1)*prev//(i)
            v.append(next_)
            prev=next_
        return v
