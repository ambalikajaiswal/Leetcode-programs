class Solution {
public:
    void rev(vector<int>&a,int s,int e)
    {
       // int temp;
        while(s<=e)
        {
          swap(a[s],a[e]);
            s++;
            e--;
        }
    }
    void rotate(vector<int>& a, int k) {
        int n=a.size();
         k= k%n;
         rev(a,0,n-1);
        rev(a,k,n-1);
        rev(a,0,k-1);
       
    }
};
