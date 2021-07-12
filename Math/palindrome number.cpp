class Solution {
public:
    bool isPalindrome(int x) {
        string res=to_string(x);
        int n=res.length();
        int l=0;
        int r=n-1;
        if(l==r)
            return true;
        while(l<=r)
        {
            if(res[r--]!=res[l++])
                return false;
        }
        return true;
    }
};
