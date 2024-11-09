Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]

  class Solution {
public:
    void nextPermutation(vector<int>& a) {
       int n=a.size();
       int ind=-1;
    
    
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i+1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }
       if(ind==-1){
          reverse(a.begin(),a.end());
          return;
       }
        reverse(a.begin()+ind+1,a.end());
       int j=-1;
       for(int i=ind+1;i<n;i++){
        if(a[i]>a[ind]){
            j=i;
            break;
        }
       }
   
        swap(a[j],a[ind]);
       
        return ; 
       

       
     
     

    }
};



void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
