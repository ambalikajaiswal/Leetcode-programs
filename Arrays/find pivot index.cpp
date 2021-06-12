/*Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11*/

class Solution {
public:
    int pivotIndex(vector<int>&a) {
        int left=0;
        int sum=0;
        int n=a.size();
        if(n==1)
            return 1;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int ind=0;
        for(int i=0;i<n;i++)
        {
          sum-=a[i];
            if(sum==left){
                return i;
        }
            left+=a[i];
        }
        return -1;
        
    }
};
