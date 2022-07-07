// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
      int l=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
               nums[l++]=nums[i];
            }
        }
        
        while(l<n)
        {
          nums[l++]=0;
        }
        
        
    }
};
