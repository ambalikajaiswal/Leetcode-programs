//Input: nums = [1,1,0,1,1,1]
//Output: 3
//consecutive ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
         int n=a.size();
        int i=0;
        int cnt=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                cnt++;
            }
            if(a[i]==0)
            {
                cnt=0;
            }
            if(cnt>mx)
            {
                mx=cnt;
            }
            
        }
        return mx;
        
    }
    
      
    };
