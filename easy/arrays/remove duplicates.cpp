// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// // It does not matter what you leave beyond the returned k (hence they are underscores).

class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        if(n==0)
            return 0;
        if(n==1)
            return a[0];
        
        int k=0;
        for(int i=1;i<n;i++)
        {
           if(a[i]==a[k])
               continue;
            a[++k]=a[i];
        }
        return k+1;
    }
};

method 2:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};
