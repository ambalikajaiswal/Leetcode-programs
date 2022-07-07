// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int a[m+n];
        
        int i=0,j=0,k=0;
        
        while(i<m && j<n)
        {
          if(nums1[i]<=nums2[j])
          {
              a[k++]=nums1[i++];
          }
            else
            a[k++]=nums2[j++];
        }
        
        while(i<m)
        {
           a[k++]=nums1[i++];
            
        }
        while(j<n)
        {
          a[k++]=nums2[j++];
        }
        
        for(int l=0;l<m+n;l++)
        {
            nums1[l]=a[l];
        }
    }
};
