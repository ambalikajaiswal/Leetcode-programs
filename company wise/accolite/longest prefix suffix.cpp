// prefix - it starts from index 0 but cannot take last character (length=n-1)
//suffix- except first character it can take till last(length=n-1)
/*Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper 
prefix and suffix. */

class Solution{
  public:		
	int lps(string s) {
	    int n = s.length();
    int lps[n] = {0};
    
    int i = 0, j = 1;
    
    lps[0] = 0;
    
	while(j < n){
	       
	    if(s[i] == s[j]){
	        lps[j++] = i + 1;
	        i++;
	    }
       
	    else{
	       if(i != 0)
	           i = lps[i-1];
	        
	       else
	           lps[j++] = 0;
            }
	}
    
        return lps[n-1];
	}
};
