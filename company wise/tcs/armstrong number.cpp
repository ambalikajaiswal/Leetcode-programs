/*Input: N = 153
Output: "Yes"
Explanation: 153 is an Armstrong number
since 13 + 53 + 33 = 153.
Hence answer is "Yes".*/

class Solution {
  public:
  int len(int n) //length of the number
  {
      int cnt=0;
      while(n!=0)
      {
          cnt++;
          n/=10;
      }
      return cnt;
  }
    string armstrongNumber(int n){
        int t=len(n);
        int temp=n;
        int sum=0,rem=0;
        while(temp>0)
        {
            rem=temp%10;
            sum+=pow(rem,t);
            temp/=10;
        }
        if(sum==n)
        return "Yes";
    return "No";
    }
};
