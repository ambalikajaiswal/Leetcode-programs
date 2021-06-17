/*check if array is strictly increasing then strictly descreasing

Input: arr = [0,3,2,1]
Output: true  */

class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n=a.size();
        int i=0,j=n-1;
        while(i<n-1 &&a[i]<a[i+1])
            i++;
        while(j>0 &&a[j]<a[j-1])
            j--;
        return(i==j &&i!=(n-1) &&j!=0);
    }
};
