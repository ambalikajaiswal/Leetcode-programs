class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()||(st.top()=='(' && s[i]!=')')||(st.top()=='['&&s[i]!=']')||st.top()=='{'&&s[i]!='}'){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

//python
class Solution:
    def isValid(self, s: str) -> bool:
      while('{}'in s or '()' in s or '[]' in s):
        s=s.replace('()','').replace('{}','').replace('[]','')
      return False if len(s)!=0 else True  

  class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        p={'(':')','{':'}','[':']'}
        for i in s:
            if i in p:
                st.append(i)
            elif len(st)==0 or p[st.pop()]!=i:
                return False
        return len(st)==0
