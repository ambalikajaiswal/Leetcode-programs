// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4


void rotate(int a[], int n)
{
    int l=a[n-1];
    
    for(int i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
        
    }
    a[0]=l;
}
