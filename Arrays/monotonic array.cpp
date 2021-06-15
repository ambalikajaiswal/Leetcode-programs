/*An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].  An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Return true if and only if the given array nums is monotonic.

 

Example 1:

Input: nums = [1,2,2,3]
Output: true*/


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>copy=nums;
        sort(nums.begin(),nums.end());
        if(nums==copy)
            return true;
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums==copy)
            return true;
        
        return false;
    }
};
