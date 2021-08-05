/*Input: n = 2
Output: 1 
Explanation: 1 is the 2nd number
of fibonacci series.*/

//space optimised approach

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int a=0,b=1,c,i;
        if(n==0)
        return a;
        for(long long i=2;i<=n;i++)
        {
            c=(a+b)%1000000007;
            a=b;
            b=c;
        }
        return b;
    }
};


//using dp
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int t[n+2];
        t[0]=0;
        t[1]=1;
        for(int i=2;i<=n;i++)
        {
            t[i]=(t[i-1]+t[i-2])%1000000007;
        }
        return t[n];
    }
};

