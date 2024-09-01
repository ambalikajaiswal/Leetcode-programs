// You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

// Return the minimum number of operations to make all elements of nums divisible by 3.

 

// Example 1:

// Input: nums = [1,2,3,4]

// Output: 3

// Explanation:

// All array elements can be made divisible by 3 using 3 operations:

// Subtract 1 from 1.
// Add 1 to 2.
// Subtract 1 from 4.

class Solution {
public:
    int minimumOperations(vector<int>& a) {
        int cnt=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]%3==0){
                continue;
            }
            else if((a[i]-1)%3==0 || (a[i]+1)%3==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};


//python
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        n=len(nums)
        cnt=0
        for i in range(n):
            if nums[i]%3==0:
                continue
            elif((nums[i]+1)%3==0 or (nums[i]-1)%3==0):
                cnt=cnt+1
        return cnt
