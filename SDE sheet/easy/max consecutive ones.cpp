Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxCount=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            maxCount=max(maxCount,count);
            if(nums[i]!=1){
                count=0;
            }
        }
        return maxCount;
    }
};

class Solution:
    def findMaxConsecutiveOnes(self, a: List[int]) -> int:
        mx=0
        cnt=0
        n=len(a)
        for i in range(n):
            if(a[i]==1):
                cnt+=1
            mx=max(mx,cnt)
            if(a[i]!=1):
                cnt=0
        return mx
