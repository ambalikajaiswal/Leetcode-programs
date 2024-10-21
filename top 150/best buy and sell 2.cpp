Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int buy=a[0];
        int profit=0;
        int max=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]<buy){
                buy=a[i];
            }
            else{
            profit+=a[i]-buy;
            buy=a[i];
            
            }
        }
        return profit;
    }
};
