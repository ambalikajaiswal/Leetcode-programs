Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
         unordered_map<int,int>m;
         int n=a.size();
         for(int i=0;i<n;i++){
            if(m.count(a[i])){
                if(abs(i-m[a[i]])<=k)
                   return true;
            }
            m[a[i]]=i;
         }
         return false;
    }
};

class Solution:
    def containsNearbyDuplicate(self, a: List[int], k: int) -> bool:
        m={}
        n=len(a)
        for i in range(n):
            if a[i] in m and abs(i-m[a[i]])<=k:
                return True
            m[a[i]]=i
        return False
