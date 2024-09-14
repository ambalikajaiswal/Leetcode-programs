Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
          return x;
        int s=1;
        int e=x;
        int res=0;
        while(s<=e){
            int m=s+(e-s)/2;
            if(m==x/m){
                return m;
            }
            else if(m<x/m){
                s=m+1;
            }
            else
               e=m-1;
        }
        return round(e);
    }
};

def mySqrt(self, x: int) -> int:
        if x==0 or x==1:
            return x
        l=0
        h=x
        while l<=h:
            m=(l+h)//2
            if m*m==x:
                return m
            elif m*m<x:
                l=m+1
            else:
                h=m-1
        return h
