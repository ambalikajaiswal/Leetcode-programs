/*Input:
N = 100
Output:
70
Explanation:
100 in binary is 01100100, 
two nibbles are (0110) and (0100)
If we swap the two nibbles, we get
01000110 which is 70 in decimal */


class Solution{
public:
    int swapNibbles(unsigned char x){
        unsigned char y=x<<4,z=x>>4; //left shift and right shift
        return(y|z); //bitwise or 
    }
