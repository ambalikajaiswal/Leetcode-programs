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
