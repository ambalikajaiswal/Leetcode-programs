/*N = 7
arr[] = {6,2,5,4,5,1,6}
Output: 12*/


class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    long long getMaxArea(long long a[], int n)
    {   
         vector<long long>l; //storing index of next smaller to left
         stack<pair<long long,int>>s;
         for(int i=0;i<n;i++)
         {
             if(s.empty())
             {
                 l.push_back(-1);
             }
             else if(!s.empty() &&s.top().first<a[i])
             {
                 l.push_back(s.top().second);
             }
             else if(!s.empty() &&s.top().first>=a[i])
             {
                 while(!s.empty() &&s.top().first>=a[i])
                 {
                     s.pop();
                 }
                 if(s.empty())
                 {
                     l.push_back(-1);
                 }
                 else
                 l.push_back(s.top().second);
             }
             s.push({a[i],i});
         }
         while(!s.empty()) //empty the stack
         {
             s.pop();
         }
        
        vector<long long>r; //store index of next smaller to right
        for(int i=n-1;i>=0;i--)
         {
             if(s.empty())
             {
                 r.push_back(n);
             }
             else if(!s.empty() &&s.top().first<a[i])
             {
                 r.push_back(s.top().second);
             }
             else if(!s.empty() &&s.top().first>=a[i])
             {
                 while(!s.empty() &&s.top().first>=a[i])
                 {
                     s.pop();
                 }
                 if(s.empty())
                 {
                     r.push_back(n);
                 }
                 else
                 r.push_back(s.top().second);
             }
             s.push({a[i],i});
         }
         reverse(r.begin(),r.end());
         
         long long ans=0;
         
         //int ans = 0;

for(int i = 0; i < n; i++){
int width = r[i] - l[i] - 1; //diff between nsr index-nsl index
ans = max(ans, a[i] * width);
}

return ans;
         
       
    }
};
