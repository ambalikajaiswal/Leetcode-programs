Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

class Solution {
public:
    int strStr(string a, string b) {
        if(a.size()<b.size()){return -1;}
            for(int i=0;i<a.size();i++){
                if(a.substr(i,b.size())==b){
                    return i;
                }
            }
        
        return -1;
    }
};
