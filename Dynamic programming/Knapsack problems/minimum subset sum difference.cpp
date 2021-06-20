/*Input: N = 4, arr[] = {1, 6, 11, 5} 
Output: 1
Explanation: 
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11   */

class Solution{

  public:
  vector<int>res(int n,int arr[],int sum)
  {  int t[n+1][sum+1];
      for( int i=0;i<=sum;i++)
            t[0][i]=false;
        for( int j=0;j<=n;j++)
            t[j][0]=true;
        for( int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j)
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        vector< int> v;
        for(int i=0;i<=sum/2;i++){
            if(t[n][i]==1){
                v.push_back(i);
            }
        }
        return v;
  }
	int minDifference(int a[], int n)  { 
	    int sum=accumulate(a,a+n,0);
	    vector<int>v=res(n,a,sum);
	     int mn=INT_MAX;
	    for(int i=0;i<v.size();i++)
	    {
	        mn=min(mn,sum-2*v[i]);
	    }
	    return mn;
	} 
};
