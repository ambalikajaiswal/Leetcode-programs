/*Input:
N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6*/

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
       vector<int>v;
       priority_queue<pair<int,int>>q; //to stpre number and index
       int i=0;
       while(i<n)
       {
           q.push({a[i],i});
           i++;
           if(i>=k){
           while(!q.empty() &&q.top().second<(i-k))
           q.pop();
           v.push_back(q.top().first);
           }
       }
       return v;
    }
};
