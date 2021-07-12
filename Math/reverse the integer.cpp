/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321*/

class Solution {
    #define PRE_MAX  2147483647 / 10
#define PRE_MIN -2147483648 / 10
public:
    
    int reverse(int x) {
        int rev = 0;
    while (x != 0)
    {
        if (PRE_MAX < rev || PRE_MIN > rev)
            return 0;
        
        rev = (rev * 10) + (x % 10);
        
        x /= 10;
    }
    return rev;
        }
    
};
