/*Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

 

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6*/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        float res=0.25*n;
        int s=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
            if(x.second>res)
                s=x.first;
        }
       return s;
    }
};
