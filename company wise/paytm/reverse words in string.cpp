/*Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i*/

class Solution
{
    public:
    //Function to reverse words in a given string.
    void rev(string &s,int l,int h)
    {
        char temp;
        while(l<=h)
        {
            temp=s[l];
            s[l]=s[h];
            s[h]=temp;
            l++;
            h--;
        }
    }
    string reverseWords(string s) 
    { 
        int i=0;
        int j=0;
        for(int i=0;i<=s.length();i++)
        {
            if(s[i]=='.'||s[i]=='\0')
            {
                rev(s,j,i-1);
                j=i+1;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    } 
};
