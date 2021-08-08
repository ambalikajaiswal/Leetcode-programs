/*Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.*/

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        if(x==0||x==1)
         return x;
         long long res;
         long long l=0,h=x;
          long long m;
         while(l<=h)
         {
              m=(l+h)/2;
             if(m*m==x)
             return m;
             else if(m*m<x)
             {
                 l=m+1;
                 res=m;
             }
             else
             {
                 h=m-1;
             }
         }
         return res;
    }
};
