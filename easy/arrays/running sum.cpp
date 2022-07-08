// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>v;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            v.push_back(sum);
            
        }
        
        return v;
    }
};
