/*Input:
N = 3, M = 3
A[] = {5, 6, 3}
B[] = {8, 4, 2}
Output: 1 4 0 5
Explanation: As 563 + 842 = 1405.*/

class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    vector<int>res;
	    int i=a.size()-1,j=b.size()-1;
	    int c=0;//carry
	    while(i>=0 &&j>=0)
	    {
	        int sum=a[i]+b[j]+c;
	        res.push_back(sum%10);
	        c=sum/10;
	        i--;
	        j--;
	        
	    }
	    while(i>=0)
	    {
	        int sum=a[i]+c;
	        res.push_back(sum%10);
	        c=sum/10;
	        i--;
	    }
	    while(j>=0)
	    {
	        int sum=b[j]+c;
	        res.push_back(sum%10);
	        c=sum/10;
	        j--;
	    }
	    
	    if(c)
	    {
	        res.push_back(c);
	    }
	    reverse(res.begin(),res.end());
	    return res;
	}

};
