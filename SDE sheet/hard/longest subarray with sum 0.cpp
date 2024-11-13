class Solution {
  public:
    int maxLen(vector<int>& a) {
        int l=0,r=0;
        int n=a.size();
        int sum=0;
        int maxi=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==0){
                maxi=i+1;
            }
           
                if(m.find(sum)!=m.end()){
                    maxi=max(maxi,i-m[sum]);
                }
                else{
                m[sum]+=i;
            }
        }
        return maxi;
    }
};
