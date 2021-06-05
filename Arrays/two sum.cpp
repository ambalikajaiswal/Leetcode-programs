class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
       
        int l=0;
        int r=n-1;
        while(l<=r)
        {
          if(a[l]+a[r]==target)
          {
              return {l+1,r+1};
          }
            else if(a[l]+a[r]>target)
            {
                r--;
            }
            else 
                l++;
        }
        return {-1,-1};
    }
};

//give the indices of the pair sum 
