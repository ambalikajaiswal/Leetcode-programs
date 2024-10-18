Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
  class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int min_num=a[0];
        int max_pro=INT_MIN;
        for(int i=0;i<n;i++){
           min_num=min(min_num,a[i]);
           max_pro=max((a[i]-min_num),max_pro);
        }
        return max_pro;
    }
};

class Solution:
    def maxProfit(self, a: List[int]) -> int:
        min_num=a[0]
        max_pro=0
        for i in range(len(a)):
            min_num=min(min_num,a[i])
            max_pro=max(max_pro,a[i]-min_num)
        return max_pro
