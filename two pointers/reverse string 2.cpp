Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

 

Example 1:

Input: s = "abcdefg", k = 2
Output: "bacdfeg"
Example 2:

Input: s = "abcd", k = 2
Output: "bacd"

  class Solution {
public:
    string reverseStr(string s, int k) {
       int l=0,h=k-1;
        
        while(l<s.length()){
            int start=l;
            if(h>=s.length())h=s.length()-1;
            while(l<=h){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            l=start+2*k;
            h=l+k-1;
        }
        return s;
    }
};
