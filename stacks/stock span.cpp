/*Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
Explanation:
Traversing the given input span for 100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.*/

{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int a[], int n)
    {
       vector<int>v;
       stack<pair<int,int>>s;//to store ngl and its index
       for(int i=i=0;i<n;i++)
       {
           if(s.empty())
           {
               v.push_back(-1);
           }
           else if(!s.empty() &&s.top().first>a[i])
           {
               v.push_back(s.top().second);
           }
           else if(!s.empty() &&s.top().first<=a[i])
           {
               while(!s.empty() &&s.top().first<=a[i])
               {
                   s.pop();
               }
               if(s.empty())
               {
                   v.push_back(-1);
               }
               else
               v.push_back(s.top().second);
           }
           s.push({a[i],i});
       }
       for(int i=0;i<v.size();i++)
       {
           v[i]=i-v[i]; //store index of ngl-index of i
       }
       return v;
    }
};

