/*Input:
txt = forxxorfxdofr
pat = for 
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.*/








class Solution{
public:
	int search(string t, string s) {
	    unordered_map<char,int>m;
	    int n=s.length();
	    int k=t.length();//size of pattern
	    for(auto it:t)
	    {               //map to store chars count of patern word
	        m[it]++;
	    }
	    int cnt=m.size();  //size of pattern
	    int ans=0;
	    int i=0,j=0;
	    while(j<n)
	    {
	        if(m.find(s[j])!=m.end())  //now check if the char exists in map if yes then decrement the count
	        {
	            m[s[j]]--;
	            if(m[s[j]]==0) //if char count is zero 
	            cnt--; //reduce overall count of pattern
	        }
	        if(j-i+1<k)
	        {
	            j++;
	        }
	        else if(j-i+1==k)
	        {
	            if(cnt==0){ //if count finally zero return ans count
	                ans++;
	            }
	            if(m.find(s[i])!=m.end())  //now incase of i do reverse
	            {
	                m[s[i]]++;
	                if(m[s[i]]==1)
	                cnt++;
	            }
	            i++; //slide the window
	            j++;
	        }
	    }
	    return ans;
	}

};
