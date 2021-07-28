/*Input :
N = 9
Output:
2
Explanation:
1 and 4 are the only Perfect Squares
less than 9. So, the Output is 2.*/

class Solution {
  public:
    int countSquares(int n) {
        int cnt=0;
       
        for(int i=1;i*i<n;i++)
        {
            cnt++;
        }
        return cnt;
    }
};
