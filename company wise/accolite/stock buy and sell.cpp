/*The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
Note: There may be multiple possible solutions. Return any one of them. Any correct solution will result in an output of 1, whereas wrong solutions will result in an output of 0.
Input:
N = 7
A[] = {100,180,260,310,40,535,695}
Output:
1
Explanation:
One possible solution is (0 3) (4 6)
We can buy stock on day 0,
and sell it on 3rd day, which will 
give us maximum profit. Now, we buy 
stock on day 4 and sell it on day 6.*/

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> a, int n){
       vector<vector<int>>v;
       
       for(int i=1;i<n;i++)
       { vector<int>v1;
           if(a[i-1]<a[i])
           {
               v1.push_back(i-1);
               i++; //continue to check for more
               while(i<n)
               {
                   if(a[i-1]<=a[i])
                    {
                        i++;
                    }
                    else
                    break;
                   
               }
               v1.push_back(i-1);
               v.push_back(v1);
           }
       }
       return v;
    }
};
