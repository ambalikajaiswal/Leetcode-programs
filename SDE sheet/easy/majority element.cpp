// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3

class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int can=0;
        int cnt=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                can=a[i];
            }
            if(a[i]==can){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return can;
    }
};
