[100,4,200,1,3,2]
output=4
  class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n=a.size();
        int cnt=0;
        int maxi=0;
        unordered_set<int>st;
        for(auto it:a){
            st.insert(it);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt=cnt+1;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};
