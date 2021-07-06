/*Input:
S = "geeksforgeeks"
Output:
7
Explanation:
Longest substring is
"eksforg".*/

//use vector instead of map 
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        vector<int>m(26,0);
        int n=s.size();
        int j=0;
        int i=0;
        int mx=INT_MIN;
        while(j<n)
        {
            m[s[j]-'a']++;
            while(m[s[j]-'a']>1) //if the count increases 
            {
               m[s[i]-'a']--; //decreament count of index i
               i++; //increment i
            }
            
            int t=j-i+1;
            mx=max(mx,t); //max length
            j++;
        }
        return mx;
    }
};
