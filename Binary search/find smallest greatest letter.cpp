Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.




class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        
        int n=a.size();
        int l=0;
        int h=n-1;
        if(a[0]>target||a[n-1]<=target){
            return a[0];
        }
        char res;
        while(l<=h){
            int m=(h+l)/2;
            
            if(a[m]>target){
                res=a[m];
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return res;
    }
};
