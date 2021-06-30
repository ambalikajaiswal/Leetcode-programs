/*Input:
N = 5, K = 2
Arr[] = {12, 5, 787, 1, 23}
Output: 787 23
Explanation: 1st largest element in the
array is 787 and second largest is 23.*/

class Solution{
public:	
	vector<int> kLargest(int a[], int n, int k) {
	    vector<int>v;
	    priority_queue<int,vector<int>,greater<int>>minH; //since largest asked so use min heap
	    
	    for(int i=0;i<n;i++)
	    {
	        minH.push(a[i]);
	        if(minH.size()>k)
	        {
	            minH.pop();
	        }
	    }
	    while(minH.size()>0) //to print the elements
	    {
	        v.push_back(minH.top());
	        minH.pop();
	    }
	    reverse(v.begin(),v.end());
	    return v;
	}

};
