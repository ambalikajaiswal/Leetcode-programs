/*Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10*/

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int a[], int n){
        int l[n];
        int r[n];
        int wat[n];
        int sum=0;
        l[0]=a[0];
        for(int i=1;i<n;i++)
        {
            l[i]=max(l[i-1],a[i]);
        }
        r[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(r[i+1],a[i]);
        }
        for(int i=0;i<n;i++)
        {
            wat[i]=min(l[i],r[i])-a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=wat[i];
        }
        return sum;
    }
};
