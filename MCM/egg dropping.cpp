int eggDrop(int n, int k) 
    {
        if(n==1)
        return k;
        else if(k==0||k==1)
        return k;
        int mn=INT_MAX;
        int temp=0;
        for(int i=1;i<=k;i++)
        {
            temp=1+max(eggDrop(n-1,i-1),eggDrop(n,k-i));
            mn=min(mn,temp);
        }
        return mn;
    }
