# Input: nums = [-4,-1,0,3,10]
# Output: [0,1,9,16,100]
# Explanation: After squaring, the array becomes [16,1,0,9,100].
# After sorting, it becomes [0,1,9,16,100].


class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        l=[]
        
        for i in nums:
            l.append(i**2)
        
        l.sort()
        return l
