Input: text = "geeksforgeeks"
       pat = "geek"
Output: 1
Explanation: "geek" exits in
"geeksforgeeks"

class Solution{
public:	
	
	int search(string text, string pat)
	{
	    return text.find(pat)!=string::npos?1:0;
	}
};
