/*Input:
N=5, K=4
arr[] = {5, 2, 1, 3, 2} 
Output: 5 2 5 1 2 5 1 2 3 5 2 1 3 5 
Explanation:
Firstly their was 5 whose frequency
is max till now. so print 5.
Then 2 , which is smaller than 5 but
their frequency is same so print 2 5.
Then 1, which is smallet among all the
number arrived, so print 1 2 5.
Then 3 , so print 1 2 3 5
Then again 2, which has the highest
frequency among all number so 2 1 3 5.*/


class Solution
{
  public:
    vector<int> kTop(int arr[], int n, int k) 
    { 
        vector<int>v;
        map<int,int>m;
        int max_freq=0;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            if(max_freq<m[arr[i]])
                max_freq = m[arr[i]];
            int freq=max_freq;
            int j=0;
        
            while(freq!=0 && j!=k){
                for(auto x:m){
                    if(x.second==freq){
                        v.push_back(x.first);
                        j++; 
                        if(j==k) break;
                    } 
                }
                freq--;
            }
        
        }
      return v;    
    }
};
