class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        if(grid[0][0] == 1)
            return 0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(i == 0 || j == 0)
                {
                    if(grid[i][j] == 1 || (i!=0 && grid[i-1][j] == 0) || (j!=0 && grid[i][j-1] == 0))
                        grid[i][j] = 0;
                    else
                        grid[i][j] = 1;
                }
                else
                {
                    if(grid[i][j] == 1)
                        grid[i][j] = 0;
                    else
                        grid[i][j] = grid[i-1][j] + grid[i][j-1];
                }
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
