/*A number is called faithful if you can write it as the sum of distinct powers of 7. 
e.g.,  2457 = 7 + 72 + 74 . If we order all the faithful numbers, we get the sequence 1 = 70, 7 = 71, 8 = 70 + 71, 49 = 72, 50 = 70 + 72 . . . and so on.
Given some value of N, you have to find the N'th faithful number.

 

Example 1:

Input:
N = 3
Output:
8
Explanation:
8 is the 3rd Faithful number.*/

class Solution {
  public:
    long long nthFaithfulNum(int n) {
        long long sum=0,i;
        vector<int>v;
        while(n)
        {
            v.push_back(n%2);
            n/=2;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                sum+=pow(7,i);
            }
        }
    
    return sum;
    }
};
