Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& a) {
        vector<int>v;
        int n=a.size();
        int maxi=a[n-1];
        v.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--){
            if(maxi<=a[i]){
                v.push_back(a[i]);
                maxi=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
