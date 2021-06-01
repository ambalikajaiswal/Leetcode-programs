class Solution {
public:
    vector<vector<int>>res;
    
    void sol(int i,int n,vector<int>&c,int sum,vector<int>op)
        
    {
        if(sum==0){
            res.push_back(op);
            return;
        }
        if(sum<0){
            return;
        }
        if(i>=n){
            return;
        }
        
        
            op.push_back(c[i]);
            sol(i+1,n,c,sum-c[i],op);
            op.pop_back();
        
        while(i<n-1 &&c[i]==c[i+1])
        {
             i++;
        }
        
        sol(i+1,n,c,sum,op);
    }
   vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>op;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        sol(0,n,candidates,target,op);
        return res;
    }
};     
        
        
