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
