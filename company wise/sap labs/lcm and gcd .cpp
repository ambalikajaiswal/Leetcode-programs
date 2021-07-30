class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
       vector<long long>v;
       long long a=gcd(A,B);
       long long b=lcm(A,B);
       v.push_back(b);
       v.push_back(a);
       return v;
    }
    long long gcd(long long  a,long long b)
    {
        if(a==0)
        return b;
        return gcd(b%a,a);
    }
    long long lcm(long long a,long long b)
    {
        return((a*b)/gcd(a,b));
    }
    
};
