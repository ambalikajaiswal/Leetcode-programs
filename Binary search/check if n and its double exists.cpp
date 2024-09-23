Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]

  class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<n;i++){
        int x=a[i]*2;
        int n=a.size();
        int l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(m!=i && a[m]==x)
               return true;
            else if(a[m]>x){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        }
        return false;
    }
};
