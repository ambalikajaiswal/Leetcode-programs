/*Given a string S, Check if characters of the given string can be rearranged to form a palindrome. 

Example 1:

Input:
S = "geeksogeeks"
Output: Yes
Explanation: The string can be converted
into a palindrome: geeksoskeeg

*/

int isPossible (string s)
{
    int n=s.length();
    int cnt[256]={0};
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }
    int odd=0;
    for(int i=0;i<256;i++)
    {
        if(cnt[i]&1)// check the count of odd values
         odd++;
         if(odd>1) //if more than one odd counts
         return 0;
    }
    return 1;
}
