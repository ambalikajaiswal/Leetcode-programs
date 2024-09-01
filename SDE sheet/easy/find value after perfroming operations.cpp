// Example 1:

// Input: operations = ["--X","X++","X++"]
// Output: 1
// Explanation: The operations are performed as follows:
// Initially, X = 0.
// --X: X is decremented by 1, X =  0 - 1 = -1.
// X++: X is incremented by 1, X = -1 + 1 =  0.
// X++: X is incremented by 1, X =  0 + 1 =  1.

class Solution {
public:
    int finalValueAfterOperations(vector<string>& a) {
        int sum=0;
        int n= a.size();
        for(int i=0;i<n;i++){
            if(a[i]=="--X" || a[i]=="X--"){
                sum--;
            }
            else{
                sum++;
            }

        }
        return sum;
        
    }
};
