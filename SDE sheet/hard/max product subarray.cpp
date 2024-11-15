class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n= a.size();
        int maxi=INT_MIN;
        int pre=1;
        int suf=1;
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            if(suf==0)suf=1;
            pre=pre*a[i];
            suf=suf*a[n-i-1];
            maxi=max(maxi,max(pre,suf));

        }
        return maxi;
    }
};
