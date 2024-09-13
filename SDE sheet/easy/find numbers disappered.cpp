Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        set<int>s(a.begin(),a.end());
        vector<int>v;
        for(int i=0;i<a.size();i++){
            if(!s.contains(i+1)){
                v.push_back(i+1);
            }
        }
        return v;
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        vector<int>v;
        for(int i=0;i<a.size();i++){
            while(a[i]!=a[a[i]-1]){
                swap(a[i],a[a[i]-1]);
            }
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=i+1)
              v.push_back(i+1);
        }
        return v;
    }
};


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(n+1, 0); // frequency vector
		vector<int>res{}; // result vec
        
		// Compute frequency
        for(auto num: nums){
            freq[num]++;
        }
        
		// Compute missing elements
        for(int i{1}; i<=n; ++i){
            if(!freq[i])
                res.push_back(i);
        }
        
        return res;
    }
};


class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        a=[0]*(len(nums)+1)
        b=[]
        for i in nums:
            a[i]+=1
        for i in range(1,len(nums)+1):
            if not a[i]:
                b.append(i)
        return b
