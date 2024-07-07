class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
       
        int l=0;
        int r=n-1;
        while(l<=r)
        {
          if(a[l]+a[r]==target)
          {
              return {l+1,r+1};
          }
            else if(a[l]+a[r]>target)
            {
                r--;
            }
            else 
                l++;
        }
        return {-1,-1};
    }
};

//give the indices of the pair sum and above codde will only work if sorted

O[n] solution using unordered map so that sorting is not required
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int> vis;

        int n =a.size();
        for(int i=0;i<=n;++i){
            int b = target-a[i]; // this is element that we need to find in the map 
            auto it= vis.find(b); //it is an iterator used to find the element in map,check if element foundin map
            if(it!=vis.end()){ // if b is not found in map ,it=vi.end()->returns an iterator pointing to the position just beyond the last element in 
                return{it->second,i};//if found then return indices of two numbers
            }
            vis[a[i]]=i;//   If element is not found, add the current number to the map
        }
        return{-1,-1};
    }
};


//python soluion
 def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen={} //dictionary to store values an dindex
        for i,value in enumerate(nums):
            remaining=target-nums[i]
            if remaining in seen:
                return[i,seen[remaining]]
            else:
                seen[value]=i
        return none
        
