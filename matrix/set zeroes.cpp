class Solution {
public:
    
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for( auto x:row)
        {
          for(int j=0;j<m;j++)
          {
             mat[x][j]=0;
          }
        
        }
        
        for(auto x:col)
        {
          for(int i=0;i<n;i++)
          {
             mat[i][x]=0;
          }
        }
        
    }
};
