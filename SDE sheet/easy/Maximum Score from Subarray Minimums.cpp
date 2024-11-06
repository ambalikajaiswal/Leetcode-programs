Given an array arr[], with 0-based indexing, select any two indexes, i and j such that i < j. 
From the subarray arr[i...j], select the smallest and second smallest numbers and add 
them, you will get the score for that subarray. Return the maximum possible score across all the subarrays of array arr[].


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int maxi = INT_MIN;
        
        for(int i=1; i<arr.size(); i++){
            maxi = max(maxi, arr[i-1]+arr[i]);
        }
        return maxi;
    }
};
