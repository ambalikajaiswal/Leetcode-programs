/*Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8
Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8*/

class Solution{
  public:
    vector<int> NSL(int arr[] , int n){ //nearest smallest to left
vector<int> ans;
stack<pair<int ,int> > st;
for(int i = 0 ; i < n ; i++){
int val = arr[i];
while(!st.empty() && st.top().first >= val) st.pop();
if(st.empty()) ans.push_back(-1);
else ans.push_back(st.top().second);
st.push({val , i});
}
return ans; // index vextor of smallest element
}
vector<int> NSR(int arr[] , int n){ //nearest smallest to right
vector<int> ans;
stack<pair<int ,int> > st;;
for(int i = n-1 ; i >= 0 ; i--){
int val = arr[i];
while(!st.empty() && st.top().first >= val) st.pop();
if(st.empty()) ans.push_back(n);
else ans.push_back(st.top().second);
st.push({val , i});
}
reverse(ans.begin() , ans.end());
return ans;//index vector of smallest element
}
int MAH(int arr[] , int n){
vector<int> sl = NSL(arr , n);
vector<int> sr = NSR(arr , n);
vector<int> ar;
int maxA = INT_MIN;
for(int i = 0 ; i < n ; i++){
ar.push_back(sr[i]-sl[i]-1);//width
}
for(int i = 0 ; i < n ; i++){
maxA = max(maxA , ar[i] * arr[i]);
}
return maxA; //max hight
}

int maxArea(int M[MAX][MAX], int n, int m) {
// Your code here
int maxA = INT_MIN;
int arr[m];
for(int i = 0 ; i < m ; i++)
arr[i] = M[0][i];
maxA = MAH(arr , m);
for(int i = 1 ; i < n ; i++){

for(int j = 0 ; j < m ; j++){
if(M[i][j] == 1) arr[j] += 1;
else arr[j] = 0;
}
maxA = max(maxA , MAH(arr , m));
}
return maxA;
}
};


