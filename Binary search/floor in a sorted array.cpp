/*Input:
N = 7, x = 5 
arr[] = {1,2,8,10,11,12,19}
Output: 1
Explanation: Largest Number less than 5 is
2 (i.e K = 2), whose index is 1(0-based 
indexing).*/


int findFloor(vector<long long> a, long long n, long long x){
        
        int res=-1;
        long long s=0;
        long long h=n-1;
        while(s<=h)
        {
            long long m=s+(h-s)/2;
            if(x==a[m])
            return m;
            else if(x<a[m])
            {
                //res=m-1;
                h=m-1;
                
            }
            else 
            { res=m;
               s=m+1; 
            }
        }
        
        return res; //return index of floor element
    }
};
