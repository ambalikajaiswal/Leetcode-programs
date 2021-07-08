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
                res=m; //store the result while moving in left side
                h=m-1;
                
            }
            else 
            { 
               s=m+1; 
            }
        }
        
        return res;
    }
};
