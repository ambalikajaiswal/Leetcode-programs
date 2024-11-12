Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 =MOORE'SVOTING ALGO

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]

class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n=a.size();
        int cnt1=0,cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=a[i]){
                cnt1=1;
                el1=a[i];
            }
            else if(cnt2==0 && el1!=a[i]){
                cnt2=1;
                el2=a[i];
            }
            else if(el1==a[i]){
                cnt1++;
            }
            else if(el2==a[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>l;
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==el1) cnt1++;
            if(a[i]==el2)cnt2++;
        }
        int cnt=int(n/3)+1;
        if(cnt1>=cnt) l.push_back(el1);
        if(cnt2>=cnt) l.push_back(el2);

        return l;
    }
};


  import sys
class Solution:
    def majorityElement(self, a: List[int]) -> List[int]:
        n=len(a)
        cnt1=0
        cnt2=0
        el1=float('-inf') // for int_min
        el2=float('-inf')
        for i in range(n):
            if cnt1==0 and el2!=a[i]:
                cnt1=1
                el1=a[i]
            elif cnt2==0 and el1!= a[i]:
                cnt2=1
                el2=a[i]
            elif el1==a[i]:
                cnt1+=1
            elif el2==a[i]:
                cnt2+=1
            else:
                cnt1-=1
                cnt2-=1
        l=[]
        cnt1=0
        cnt2=0
        for i in range(n):
            if el1==a[i]:
                cnt1+=1
            if el2==a[i]:
                cnt2+=1
        
        cnt=int(n/3)+1
        if cnt1>=cnt:
            l.append(el1)
        if cnt2>=cnt:
            l.append(el2)
        return l
