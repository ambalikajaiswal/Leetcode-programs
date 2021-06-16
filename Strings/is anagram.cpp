/*Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.*/


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        unordered_map<char,int>m;
        for(int i=0;i<a.length();i++)
        {
            m[a[i]]++;
        }
        for(int j=0;j<b.length();j++)
        {
            m[b[j]]--;
        }
        for(x:m)
        {
            if(x.second!=0)
            return false;
        }
        return true;
    }

};
