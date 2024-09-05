Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n=a.size();
        for(int i=n-1;i>=0;i--){
            if(a[i]==9){
                a[i]=0;
            }
            else{
                a[i]++;
                return a;
            }
        }
        a.insert(a.begin(),1);
        return a;
    }
};

\\python
class Solution:
    def plusOne(self, a: List[int]) -> List[int]:
        n=len(a)
        for i in reversed(range(n)):
            if a[i]==9:
               a[i]=0
            else:
                a[i]+=1
                return a
            
        
        return [1]+a
