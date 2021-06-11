/*Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.

Input: nums = [1,1,1], k = 2
Output: 2*/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int sum=0;
        int cnt=0;
        unordered_map<int,int>m;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum==k)
                cnt++;
            if(m.find(sum-k)!=m.end())
                cnt+=m[sum-k];
            m[sum]++;   
        }
        return cnt;
        
    }
};
