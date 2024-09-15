Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4


class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]>=a[l]){ //check left side is sorted
                if(a[l]<=target && a[m]>=target){
                h=m-1;
            }
            else{
                l=m+1;
            }
            }
            else{
                if(a[m]<=target&& a[h]>=target){ // check right side sorted
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
            if(target==a[m]){
                return m;
            }

           
    }
    return -1;}
    
};
