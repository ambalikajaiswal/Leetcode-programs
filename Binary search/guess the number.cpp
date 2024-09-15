ou call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.

 

Example 1:

Input: n = 10, pick = 6
Output: 6

class Solution {
public:
    int guessNumber(int n) {
       int l=0;
       int h=n;
       while(l<=h){
        int mid=l+(h-l)/2;
        if(guess(mid)==-1){
            h=mid-1;
        }else if(guess(mid)==1){
            l=mid+1;
        }
        else if(guess(mid)==0){
            return mid;
        }

           
       } 
       return 0;
    }
};
