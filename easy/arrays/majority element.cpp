// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3


public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int left=0;
        int sum=0;
        for(int i=0;i<n;i++)
        { 
            sum+=nums[i];

        }
        
        for(int i=0;i<n;i++)
        {
            sum-=nums[i];
            
            if(left==sum)
                return i;
            left+=nums[i];
        }
        return -1;
    }
};
