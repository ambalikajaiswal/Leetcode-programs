class Solution {
public:
    int countPairs(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        int l=0;
        int h=a.size()-1;
        int cnt=0;
        while(l<h){
            if(a[l]+a[h]<target){
                cnt+=h-l;
                l++;
            }
            else{
                h--;
            }
        }
        
        return cnt;
    }
};
