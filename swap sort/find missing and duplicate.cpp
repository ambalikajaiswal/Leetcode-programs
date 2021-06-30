/*Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.*/

class Solution{
public:
    int *findTwoElement(int *a, int n) {
        int*res=new int[2];
        int i=0;
        while(i<n)
        {
            if(a[i]!=a[a[i]-1])
            {
                swap(a[i],a[a[i]-1]);
            }
            else
            i++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i+1)
            {
                res[0]=a[i];//dup
                res[1]=i+1;//missing
            }
        }
        return res;
    }
};
