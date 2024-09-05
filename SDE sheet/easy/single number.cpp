class Solution {
public:
    int singleNumber(vector<int>& a) {
        int ans=0;
        for (auto x:a){
            ans^=x; //xor operation
        }
        return ans;
    }
};
