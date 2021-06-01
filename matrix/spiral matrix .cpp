class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n,0));// create the matrix
        int fill=1;
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int dir=0;
        while(top<=down && left<=right)
        {
          if(dir==0)
          {
              for(int i=left;i<=right;i++)
              {
                 res[top][i]=fill++;;
              }
              top++;
          }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                  res[i][right]=fill++;
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--){
                    res[down][i]=fill++;
                }
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    res[i][left]=fill++;
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return res;
    }
};
