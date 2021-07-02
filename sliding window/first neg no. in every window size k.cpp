/*N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6*/

vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
                                                 

    vector<long long>v;
    deque<long long>q;
    long long i=0;
   long long j=0;
   while(j<n)
   {
       if(a[j]<0) //negative then push in list
       {
           q.push_back(a[j]);
       }
       if(j-i+1<k)
       {
           j++;
       }
       else if(j-i+1==k)
       {
           if(!q.empty())
           {
               v.push_back(q.front());
           }
           else
           v.push_back(0); //if list empty push 0
           
           if(a[i]==q.front()) //check if any element matches the element in the list
           {
               q.pop_front();
              
           }
       
            i++;  //slide window
               j++;
       }
       
   }
       
    
return v;
                                                 
 }
