xample 1:

Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int j=1;
        
        int cnt=1;
        int n=a.size();
      
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
                
            }
            else{
                cnt=1;

            }
            
            if(cnt<=2){
                a[++]=ja[i];
                
            }
            
        }
        return j;
    }
};


class Solution:
    def removeDuplicates(self, a: List[int]) -> int:
        j=1
        cnt=1
        for i in range(1,len(a)):
            if a[i]==a[i-1]:
                cnt+=1
            else:
                cnt=1
            if cnt<=2:
                a[j]=a[i]
                j+=1
        return j
