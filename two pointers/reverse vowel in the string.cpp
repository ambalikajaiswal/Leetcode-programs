Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

class Solution {
public:
    bool isvowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isvowel(s[l])) l++;
            if (!isvowel(s[r])) r--;
               
            
            if(isvowel(s[l])&&isvowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
