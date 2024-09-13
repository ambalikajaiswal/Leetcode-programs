Input: g = [1,2,3], s = [1,1]
Output: 1
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt=0;
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                
                i++;
                cnt++;
                
            }
            j++;
            
        }
        return cnt;
    }
};

class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        i=0
        j=0
        cnt=0
        g.sort()
        s.sort()
        while i<len(g) and j<len(s):
            if g[i]<=s[j]:
                cnt+=1
                i+=1
            j+=1
        return cnt
