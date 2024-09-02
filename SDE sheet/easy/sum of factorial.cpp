// Input: n = 3
// Output: 1 2
// Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,
// but the third factorial number is 6 which is greater than n. So we print only 1 and 2.

class Solution {
  public:
  
    long long fact(long long n){
        if(n==1)
         return 1;
        return n* fact(n-1);
    }
    vector<long long> factorialNumbers(long long n) {
       vector<long long>v;
       for (int i=1;;i++){
           long long facto=fact(i);
           if(facto>n)
              break;
           v.push_back(facto);
       }
       return v;
    }
    
};
