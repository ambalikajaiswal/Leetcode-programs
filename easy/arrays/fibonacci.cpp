// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

recursive

class Solution {
public:
    int fib(int n) {
       
        int sum=0;
        if(n==0||n==1)
            return n;
        
        return fib(n-1)+fib(n-2);
    }
};

method 2
  
  class Solution {
public:
    int fib(int n) {
        if(n==0||n==1)
            return n;
       
       int f=0;
        int sec=1;
        int th;
        for(int i=2;i<=n;i++)
        {
           th=f+sec;
            f=sec;
            sec=th;
        }
        return th;
    }
};
