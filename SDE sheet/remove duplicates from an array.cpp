\\c++
  class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int j=0;
        
        for(int i=0;i<n;i++){
            if(a[j]!=a[i]){
              j++;
              a[j]=a[i];
        }
        }       
        
        return j+1;
    }
};

\\python
class Solution:
    def removeDuplicates(self, a: List[int]) -> int:
        j=0
        n=len(a)
        for i in range(n):
            if a[j]!=a[i]:
                j+=1
                a[j]=a[i]
        return j+1
