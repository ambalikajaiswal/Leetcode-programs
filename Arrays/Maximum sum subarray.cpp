class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_so=INT_MIN;
        int max_end=0;
        for(int i=0;i<n;i++)
        {
            max_end+=nums[i];
            if(max_so<max_end)
            {
                max_so=max_end;
            }
            if(max_end<0)
            {
                max_end=0;
            }
        }
        return max_so;
        
    }
};
