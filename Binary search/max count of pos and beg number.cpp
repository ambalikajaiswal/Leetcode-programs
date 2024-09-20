Example 1:

Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.



class Solution {
public:
    int maximumCount(vector<int>& a) {
        int n=a.size();
        int pos=0,neg=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                neg++;
            }
            else if(a[i]>0){
                pos++;
            }
        }
        maxi=max(maxi,max(pos,neg));
        return maxi;
    }
};

approach 2
class Solution {
public:
    int maximumCount(vector<int>& a) {
        int n= a.size();
        int l=0;
        int h=n-1;
        int ind=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]<=0){
              l=m+1;
            }
            else{
                h=m-1;
               ind=m;
            }
        }
        int max1=n-ind;
        if(ind==-1) max1=0;
        l=0,h=n-1,ind=-1;
        while(l<=h){
             int m=(l+h)/2;
             if(a[m]>=0){
                h=m-1;
             }
             else{
                l=m+1;
                ind=m;
             }
        }
        int max2=ind+1;
        if(ind==-1) max2=0;
        return max(max1,max2);
    }
};
