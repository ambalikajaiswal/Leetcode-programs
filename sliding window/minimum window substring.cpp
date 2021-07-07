/*Input:
S = "timetopractice"
P = "toc"
Output: 
toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.*/


class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int h[256]={0};
        int cnt=0;
        for(auto i:p)
        {
            if(h[i]==0){
            cnt++;}
            h[i]++;
            
        }
        int i=0,j=0;
        int ind=0;
        int mn=INT_MAX;
        while(j<s.size())
        {
            h[s[j]]--;
            if(h[s[j]]==0)
            {
                cnt--;
            }
            if(cnt==0)
            {
                while(cnt==0)
                {
                    if(mn>j-i+1)
                    {
                        mn=j-i+1;
                        ind=i;
                    }
                    h[s[i]]++;
                    if(h[s[i]]>0){
                        cnt++;
                    }
                    i++;
                }
            }
            j++;
        }
        if(mn==INT_MAX)
        return "-1";
    return s.substr(ind,mn);
    }
};

// { Driver Code Starts.
