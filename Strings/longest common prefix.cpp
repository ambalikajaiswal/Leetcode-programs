Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

  class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string prev=s[0];
        int len=prev.size();
       for(int i=1;i<s.size();i++){
        while(prev.substr(0,len)!=s[i].substr(0,len)){
            len--;
            
            if(len==0){
                return "";
            }
            
            
        }
        prev=s[i].substr(0,len);
       }
       return prev;
    }
};

//python
class Solution:
    def longestCommonPrefix(self, s: List[str]) -> str:
        prev=s[0]
        pref=len(prev)
        for i in s[1:]:
            while prev[0:pref]!=i[0:pref]:
                pref-=1
                if pref==0:
                    return ""
            prev=prev[0:pref]
        return prev
