Example 1:

Input: s = "loveleetcode", c = "e"
Output: [3,2,1,0,1,0,0,1,2,2,1,0]
Explanation: The character 'e' appears at indices 3, 5, 6, and 11 (0-indexed).
The closest occurrence of 'e' for index 0 is at index 3, so the distance is abs(0 - 3) = 3.
The closest occurrence of 'e' for index 1 is at index 3, so the distance is abs(1 - 3) = 2.
For index 4, there is a tie between the 'e' at index 3 and the 'e' at index 5, but the distance is still the same: abs(4 - 3) == abs(4 - 5) = 1.
The closest occurrence of 'e' for index 8 is at index 6, so the distance is abs(8 - 6) = 2.

  class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>v(n);
        vector<int>ioc;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ioc.push_back(i);
            }
        }
        int m=ioc.size();
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(i>ioc[r]){
                l=r;
            
            if(r<m-1){
                r++;
            }
            }
         v[i]=min(abs(ioc[r]-i),abs(ioc[l]-i));
        }
      return v;
    }
};



class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n=len(s)
        a=[0]*n
        b=[]
        for i in range(n):
            if s[i]==c:
                b.append(i)
        
        m=len(b)
        l=0
        r=0
        for i in range(n):
            if(i>b[r]):
                l=r
                if(r<m-1):
                    r+=1
            a[i]=min(abs(i-b[r]),abs(i-b[l]))
        return a
            
