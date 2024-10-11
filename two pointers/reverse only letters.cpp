Input: s = "ab-cd"
Output: "dc-ba"

  class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isalpha(s[l])){
                l++;
            }
            else if(!isalpha(s[r])){
                r--;
            }
            else{
                swap(s[l],s[r]);
                    l++;
                    r--;
                
            }
        }
        return s;
    }
};
