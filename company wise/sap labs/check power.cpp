/*Input:
X = 2, Y = 8
Output:
1
Explanation:
23 is equal to 8.*/
  
  class Solution{   
public:
    int isPowerOfAnother(long long x, long long y){
        int a=log(y)/log(x);
        double b=log(y)/log(x);
        return(a==b);
         
    }
};
