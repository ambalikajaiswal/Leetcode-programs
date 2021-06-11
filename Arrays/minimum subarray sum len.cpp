/*Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint*/


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int i=0;
        int sum=0;
        int ans=INT_MAX;
        for(int j=0;j<a.size();j++)
        {
            sum+=a[j];
           while(sum>=target)
           {
               ans=min(ans,j-i+1);
               sum-=a[i++];
           }
            
            
        }
        return ans==INT_MAX?0:ans;
    }
};
