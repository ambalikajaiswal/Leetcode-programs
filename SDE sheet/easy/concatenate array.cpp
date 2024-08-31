// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

// Specifically, ans is the concatenation of two nums arrays.

// Return the array ans.

 

// Example 1:

// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n); //created double sized
        for(int i=0;i<n;i++){
            ans[i]=ans[i+n]=nums[i];
        }
        return ans;
    }
};


//python
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n=len(nums)
        l=[0]*(2*n) to create size of double
        for i in range(n):
            l[i]=nums[i]
            l[i+n]=nums[i]
        return l

        
