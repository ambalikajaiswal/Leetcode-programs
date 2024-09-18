Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int start = 0;
        int end =nums.size()-1;
        int startIndex = -1;
      
        while(start<=end){
             int mid = (start+end)/2;

             if(nums[mid]==target){
              startIndex =mid;
                end = mid-1;
             }
             else if(nums[mid]>target){
                 end = mid-1;
             }
             else {
                 start = mid+1;
             }
        }

        start = 0;
        end =nums.size()-1;
        int endIndex =  -1;
        while(start<=end){
             int mid = (start+end)/2;

             if(nums[mid]==target){
              endIndex =mid;
                start = mid+1;
             }
             else if(nums[mid]>target){
                 end = mid-1;
             }
             else {
                 start = mid+1;
             }
        }



        vector<int>ans;

        if(endIndex ==-1 && startIndex ==-1){
            return ans;
        }
        while(startIndex<=endIndex){
            ans.push_back(startIndex);
            startIndex++;
        }
     return ans;
    }
};
