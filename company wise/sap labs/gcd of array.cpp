/*Input: N = 3, arr[] = {2, 4, 6}
Output: 2
Explanation: GCD of 2,4,6 is 2.*/

class Solution
{
	public:
	int gc(int a,int b)
{
     if(b==0)
     return a;
     return gc(b,a%b);
}

int gcd(int n,int a[])
{
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        res=gc(res,a[i]);
        
        if(res==1)
        return 1;
    }
    return res;
}
};


OR

class Solution
{
	public:
    int gcd(int n, int a[])
    {
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        res=__gcd(res,a[i]);
    }
    return res;
    }
};
