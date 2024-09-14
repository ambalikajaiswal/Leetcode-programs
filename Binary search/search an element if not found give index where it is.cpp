Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

  class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
       int n= a.size();
       int l=0;
       int h=n;
       if(target>a[h-1])
         return h;
       while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target){
            return m;
        }
        else if(a[m]<target){
            l=m+1;
        }
        else
           h=m-1;
       }
       return l;
    }
};
