class Solution {
public:
    vector<vector<int>>res;
    void pick(int i,int n,vector<int>&c,int sum,vector<int>op)
    {
       if(sum==0)
       {
           res.push_back(op);
           return;
       }
        if(sum<0)
        {
            return;
        }
        if(i>=n){
            return;
        }
        if(c[i]<=sum)
        {
            op.push_back(c[i]);
            pick(i,n,c,sum-c[i],op);
            op.pop_back();
        }
        //distinct elements 
        while(i<n-1 &&c[i]==c[i+1]){ 
            i++;
        }
        pick(i+1,n,c,sum,op);
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>op;
        int n=candidates.size();
        pick(0,n,candidates,target,op);
        return res;
    }
};
