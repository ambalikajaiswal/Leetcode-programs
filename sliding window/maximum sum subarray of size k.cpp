/*Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum. */

class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &a , int n){
       int i=0;
       int j=0;
       int sum=0;
       int mx=INT_MIN;
       while(j<n)
       {
         sum=sum+a[j]; //calculate sum
         if(j-i+1<k) //if window size is smaller than k keep on increasing the j
         {
             j++;
         }
         else if(j-i+1==k) //once window size is k
         {
             mx=max(mx,sum);//same time find max
             sum=sum-a[i];//also remove i elements
             i++; //increment the pointers to slide window
             j++;
         }
       }
       return mx;
    }
};
