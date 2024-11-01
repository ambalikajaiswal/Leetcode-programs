/*Input: S = "abba"
Output: 1
Explanation: S is a palindrome*/

class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    int n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!=s[n-i-1])
	         return 0;
	         
	    }
	   return 1;
	}

};

type 2
class Solution {
public:
    bool isPalindrome(int x) {
       int res=0;
       int dup=x;
       
       while(x>0){
        int ld=x%10;
        res=(res*10)+ld;
        x=x/10;
       }
      if (dup == res) {
        // If equal, return true
        // indicating it's a palindrome
        return true;
    } else {
        // If not equal, return false
        // indicating it's not a palindrome
        return false;
    }
    }
};


class Solution:
    def isPalindrome(self, s: str) -> bool:
        n = len(s)
        p = ''
        s=s.lower()
        for i in range(n):
            if s[i].isalpha() or s[i].isnumeric():
                p += s[i]
        
        m = len(p)
        h = 0
        r = m - 1
        while h < r:
            if p[h] == p[r]:
                h += 1
                r -= 1
            else:
                return False
        return True
