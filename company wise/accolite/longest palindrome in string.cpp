/* Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa" */

 string longestPalin (string s) {
        string r="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int j=i;
            string a="";
            while(j<n &&s[i]==s[j])
            {
                a+=s[j];
                j++;
            }
            int k=i-1;
            while(k>=0 &&j<n &&s[k]==s[j])
            {
                a=s[k]+a+s[j];
                k--;
                j++;
                
            }
            if(r.size()<a.size())
            {
                r=a;
            }
                
        }
        return r;
    }
