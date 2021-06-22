/*Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.*/


class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n){
        vector<long long>v;
        stack<long long>s;
        for(long long i=n-1;i>=0;i--)
        {
           if(s.empty()){
           v.push_back(-1);}
           else if(!s.empty() &&s.top()>a[i])
           {
               v.push_back(s.top());
           }
           else if(!s.empty() && s.top()<=a[i])
           {
               while(!s.empty() &&s.top()<=a[i]){
                   
                   s.pop();
               }
               if(s.empty())
               {
                   v.push_back(-1);
               }
               else
               v.push_back(s.top());
           }
           s.push(a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
