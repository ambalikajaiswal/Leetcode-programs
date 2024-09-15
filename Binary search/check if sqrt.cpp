class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==0||n==1){
            return true;
        }
        int l=1;
        int h=n;
        int res=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(n%m==0 && m==n/m){
                return true;
            }
            else if(m<n/m){
                l=m+1;
               
            }
            else{
                h=m-1;
            }
        }
        
        return false;
    }
};
