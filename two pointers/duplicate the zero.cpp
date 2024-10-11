Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

  class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        vector<int>v;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]==0){
                v.push_back(0);
                v.push_back(0);
            }
            else{
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++){
            a[i]=v[i];
        }
    
    }
};
