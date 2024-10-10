Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"

  class Solution:
    def reverseWords(self, a: str) -> str:
        a=list(a)
        s=0
        e=0
        n=len(a)
        for i in range(n + 1):  # Loop up to n to capture the last word
         if i == n or a[i] == ' ':  # Last word or space triggers reverse
            e = i - 1
            # Reverse the current word between indices s and e
            while s < e:
                a[s], a[e] = a[e], a[s]
                s += 1
                e -= 1
            s = i + 1 
        return ('').join(a)


  class Solution {
public:
    string reverseWords(string s) {
        int t=0;
        int e=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' '||i==s.size()){
                
                e=i-1;

                while(t<e){
                    swap(s[t++],s[e--]);
                }
            
            t=i+1;
            }
        
        }
        return s;
    }
};
