from typing import List
import sys

class Solution:
    def largest(self, n : int, arr : List[int]) -> int:
        
        INT_MIN = -sys.maxsize - 1
        max=INT_MIN
        
        for i in range(n):
            if max<arr[i]:
                max=arr[i]
        return max
        
