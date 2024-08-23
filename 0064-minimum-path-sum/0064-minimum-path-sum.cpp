class Solution {
public:
    int solve(vector<vector<int>> &cost,int r,int c,int &row,int &col, vector<vector<int>> &dp)
    {
        if(r==row-1 && c==col-1)
         return cost[r][c];
        if(r>row-1 || c>col-1)
         return INT_MAX;
       
        if(dp[r][c]!=-1)
         return dp[r][c];

        dp[r][c]=cost[r][c]+min(solve(cost,r+1,c,row,col,dp),solve(cost,r,c+1,row,col,dp));
        return dp[r][c];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>> dp(row,vector<int> (col+1,-1));
        return solve(grid,0,0,row,col,dp);
    }
};