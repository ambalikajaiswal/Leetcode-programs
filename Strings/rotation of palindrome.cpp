/*Input:
s = aaaab
Output: 1 
Explanation: "aaaab" can be rotated to
form "aabaa" which is a palindrome.*/


class Solution{
public:
	bool is(string s)
	{
	    int n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!=s[n-i-1])
	         return false;
	    }
	    return true;
	}
	int isRotatedPalindrome(string s)
	{
	    if(is(s))
	      return true;
	    int n=s.length();
	    for(int i=0;i<n;i++) //chec for all rotations
	    {
	        string s1=s.substr(i+1,n-i-1);
	        string s2=s.substr(0,i+1);
	        
	        if(is(s1.append(s2)))
	        return 1;
	    }
	    return 0;
	    	}
};
