class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        int cnt=1;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<n;i++)
        {
           if(nums[i]>nums[i-1])
           {
               cnt++;
           }
            
            else
            {
                cnt=1;
            }
            
            res=max(res,cnt);
        }
        
        return res;
    }
};
