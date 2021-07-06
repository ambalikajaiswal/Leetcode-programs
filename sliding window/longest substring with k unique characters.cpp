/*Input:
S = "aabacbebebe", K = 3
Output: 7
Explanation: "cbebebe" is the longest 
substring with K distinct characters.*/

class Solution{
    public:
    int longestKSubstr(string s, int k) {
    map<char,int> mp; int ans=-1;
        int i=0,j=0;
        while(j <= s.length())
        {
            if(mp.size() < k)
            {
                mp[s[j]]++; //increment the count
                j++;
            }
            else if(mp.size()==k)
            {
                ans = max(ans,j-i); //calculate the length
                mp[s[j]]++;
                j++;
            }
            else
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]); //if count becomes 0 remove from map
                i++;
            }
        }
        return ans;
    }
};

