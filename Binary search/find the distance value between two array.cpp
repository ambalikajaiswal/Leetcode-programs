Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
Output: 2
Explanation: 
For arr1[0]=4 we have: 
|4-10|=6 > d=2 
|4-9|=5 > d=2 
|4-1|=3 > d=2 
|4-8|=4 > d=2 
For arr1[1]=5 we have: 
|5-10|=5 > d=2 
|5-9|=4 > d=2 
|5-1|=4 > d=2 
|5-8|=3 > d=2
For arr1[2]=8 we have:
|8-10|=2 <= d=2
|8-9|=1 <= d=2
|8-1|=7 > d=2
|8-8|=0 <= d=2

class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d) {
        sort(b.begin(),b.end());
        int cnt=0;
        for(int i=0;i<a.size();i++){
            int l=0;
            int h=b.size()-1;
          
            while(l<=h){
                int m=l+(h-l)/2;
                if(abs(a[i]-b[m])<=d){
                    break;
                }
                else if(a[i]>b[m]){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
                }
                if(l>h){
                    cnt++;
                }
            }
            return cnt;
        }
    
};
