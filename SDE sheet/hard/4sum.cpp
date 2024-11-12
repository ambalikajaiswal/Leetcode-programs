class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        vector<vector<int>>v;
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<n;i++){
            if(i!=0 && a[i]==a[i-1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(j>i+1 && a[j]==a[j-1]) continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=static_cast<long long>(a[i])+a[j]+a[k]+a[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        vector<int>b={a[i],a[j],a[k],a[l]};
                        v.push_back(b);
                        k++;
                        l--;
                        while(k<l && a[k]==a[k-1]) k++;
                        while(k<l &&a[l]==a[l+1]) l--;
                    }
                }
            }
        }
        return v;
    }
};
