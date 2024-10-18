Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


  class Solution {
public:
    void rotateright(vector<int>& a, int i,int j){
        while(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& a, int k) {
        int n=a.size();
        k=k%n;
        rotateright(a,0,n-1);
        rotateright(a,0,k-1);
        rotateright(a,k,n-1);
    }
};

//using built in function
class Solution {
public:
    
    void rotate(vector<int>& a, int k) {
        int n=a.size();
        k=k%n;
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+k);
        reverse(a.begin()+k,a.end());
    }
};
