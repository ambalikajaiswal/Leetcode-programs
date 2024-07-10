//c++
class Solution {
public:
    bool check(vector<int>& a) {
        int n= a.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                cnt++;//keep a check on if current is less that previosu
            }
        }
        if(a[n-1]>a[0]) //check first and last
         cnt++;
        
        return cnt<=1;//return true or false based on condition.
        
    }
};

//python solution
class Solution:
    def check(self, a: List[int]) -> bool:
        n=len(a)
        cnt=0
        for i in range(1,n):
            if a[i]<a[i-1]:
                cnt+=1
        
        if a[n-1]>a[0]:
            cnt+=1
        return cnt<=1
