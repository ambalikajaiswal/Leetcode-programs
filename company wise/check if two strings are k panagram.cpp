/*Input:
str1 = "fodr", str2="gork"
k = 2
Output:
1
*/

class Solution {
  public:
    bool areKAnagrams(string s1, string s2, int k) {
        if(s1.length()!=s2.length())
        return false;
        int cnt=0;
        int h1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            h1[s1[i]-'a']++;
        }
        int h2[26]={0};
        for(int i=0;i<s2.length();i++)
        {
            h2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(h1[i]>h2[i])
            {
                cnt+=abs(h1[i]-h2[i]);
            }
        }
        return cnt<=k;
    }

