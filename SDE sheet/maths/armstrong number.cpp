// Input: n = 153
// Output: true
// Explanation: 153 is an Armstrong number since 1^3 + 5^3 + 3^3 = 153. Hence answer is "true".

class Solution {
  public:
    string armstrongNumber(int n) {
        int k= to_string(n).length();
        int sum=0;
        int num=n;
        
        while(n>0){
            int ld=n%10;- to extract the digits
            sum+=pow(ld,k);
            n=n/10;- remove that digit
        }
        if(sum==num){
            return "true";
        }
        return "false";
        
    }
};
