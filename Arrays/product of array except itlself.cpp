/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
  Input: nums = [1,2,3,4]
Output: [24,12,8,6]*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        vector<int>res(n,1);
        int beg=1,last=1;
        for(int i=0;i<n;i++)
        { 
            res[i]*=beg;
            beg*=a[i];
            res[n-i-1]*=last;
            last*=a[n-i-1];
            
        }
        return res;
    }
};
