/*Input: nums = [3,6,1,0]
Output: 1
Explanation: 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.*/


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n=nums.size();
        int res=0;
        int big=*max_element(nums.begin(),nums.end());
        //int res=0;
        for(int i=0;i<n;i++)
        {
          if(nums[i]==big)
              res=i;
          
        else
        {
           if(big<2*nums[i])
               return -1;
        }
            
        }
    return res;
}
        
    
};
