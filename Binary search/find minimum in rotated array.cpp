class Solution {
public:
    int findMin(vector<int>& a) {
        int n=a.size();
        int l=0;
        int h=n-1;
        int res=a[0];
        while(l<=h){
            
            if(a[l]<a[h]){
                res=min(res,a[l]);
                break;
            }
            int m=l+(h-l)/2;
            res=min(res,a[m]);
            if(a[l]<=a[m]){
                l=m+1;
            }
            else if(a[m]<=a[h]){
                h=m-1;
            }
        }
        return res;
    }
};
