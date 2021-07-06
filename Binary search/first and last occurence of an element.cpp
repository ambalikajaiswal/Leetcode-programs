/*Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 
 */



int left(int a[],int n,int x) //search in mid ke left ka poora array
{
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(x==a[m])
        {
            ans=m;
            h=m-1;
        }
        else if(x<a[m])
        {
            h=m-1;
        }
        else
        l=m+1;
        
    }
    return ans;
}

int right(int a[],int n,int x) //search in right side
{
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(x==a[m])
        {
            ans=m;
            l=m+1;
        }
        else if(x<a[m])
        {
            h=m-1;
        }
        else
        l=m+1;
        
    }
    return ans;
}
vector<int> find(int a[], int n , int x )
{
    vector<int>v;
    int z=left(a,n,x);
    int y=right(a,n,x);
    v.push_back(z);
    v.push_back(y);
    return v;
}
