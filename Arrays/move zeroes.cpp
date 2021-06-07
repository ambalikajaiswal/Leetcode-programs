/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
  Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]*/
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
              swap(a[cnt++],a[i]);
            }
        }
    }
};
