A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

 

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

  class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        
        while(true){
            int s=0;
            while(n!=0){
            int m=n%10;
            s+=(m*m);
            n=n/10;
        }
          if(s==1)
           return true;
        
          if(st.find(s)!=st.end()){
            return false;
          }
          st.insert(s);
          n=s;
        }
        return false;
    }
};
