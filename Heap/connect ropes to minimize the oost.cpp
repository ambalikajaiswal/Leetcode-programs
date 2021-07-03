/*n = 4
arr[] = {4, 3, 2, 6}
Output: 
29*/

 long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>,greater<long long>>minH;
        
        for(int i=0;i<n;i++)
        { minH.push(arr[i]);
        }
        long long cost=0;
        while(minH.size()>=2)
        {
            long long f=minH.top(); //pop two min elements
            minH.pop();
            long long s=minH.top();
            minH.pop();
            cost+=f+s; //add them to cost
            minH.push(f+s); //push back to heap 
        }
        
        
        return cost;
    }
