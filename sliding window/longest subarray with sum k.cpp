/*Input :
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}.*/






class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        unordered_map<int,int>m;
        int sum=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum==k)
             mx=i+1;
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            if(m.find(sum-k)!=m.end())
            {
                mx=max(mx,i-m[sum-k]);
            }
        }
        return mx;
    } 

};
