Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
  class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int t=0,l=0,r=m-1,b=n-1;
        vector<int>v;
        while(t<=b &&l<=r){
            for(int i=l;i<=r;i++){
                v.push_back(a[t][i]);
                        }
            t++;

            for(int i=t;i<=b;i++){
                v.push_back(a[i][r]);
            }
            r--;

            if(t<=b){
                for(int i=r;i>=l;i--){
                    v.push_back(a[b][i]);
                }
                b--;
            }
             if(l<=r){
                for(int i=b;i>=t;i--){
                    v.push_back(a[i][l]);
                }
                l++;
            }
        }
        return v;
    }
};
