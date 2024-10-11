Example 1:

Input: nums = [7,52,2,4]
Output: 596
Explanation: Before performing any operation, nums is [7,52,2,4] and concatenation value is 0.
 - In the first operation:
We pick the first element, 7, and the last element, 4.
Their concatenation is 74, and we add it to the concatenation value, so it becomes equal to 74.
Then we delete them from nums, so nums becomes equal to [52,2].
 - In the second operation:
We pick the first element, 52, and the last element, 2.
Their concatenation is 522, and we add it to the concatenation value, so it becomes equal to 596.
Then we delete them from the nums, so nums becomes empty.
Since the concatenation value is 596 so the answer is 596.

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& a) {
        int n=a.size();
        int l=0;
        int r=n-1;
        long long sum=0;
        while(l<r){
            string res=to_string(a[l])+to_string(a[r]);
            sum+=stoi(res);
            l++;
            r--;
        }
        if(n%2!=0){
            sum+=a[n/2];
        }
        return sum;
    }
};

class Solution:
    def findTheArrayConcVal(self, a: List[int]) -> int:
        sum=0
        l=0
        r=len(a)-1
        while l<r:
            res=str(a[l])+str(a[r])
            sum+=int(res)
            l+=1
            r-=1
        if len(a)%2!=0:
            sum+=a[len(a)//2]
        return sum
