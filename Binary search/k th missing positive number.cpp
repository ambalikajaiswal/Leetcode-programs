Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

 

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

  class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        for(int i=0;i<a.size();i++){
            if(a[i]<=k){
                k++;
            }
        }
        return k;
    }
};


class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int n=a.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if((a[m]-(m+1))<k){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return l+k;
    }
};
