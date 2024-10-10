Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false

class Solution {
public:
    bool ispalin(string s,int l, int r){
      
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;

    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                return ispalin(s,l+1,r)|| ispalin(s,l,r-1);
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};
