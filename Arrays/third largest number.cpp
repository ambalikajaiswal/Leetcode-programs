/*Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.

 

Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());//to erase duplicates
        if(nums.size()<3)
                   {
                      return nums[nums.size()-1];
                   }
      return nums[nums.size()-3];
    }
};
