Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ind=0;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(ind<n){
                if(s[ind]==t[i])
                ind++;
            }
        }
        if(ind==s.size())
        return true;
    return false;
    }
};
