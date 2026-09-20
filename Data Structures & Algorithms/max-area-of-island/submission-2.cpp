class Solution {
    int directions[4][2] = { {1 , 0 }, {-1 , 0 }, {0 , 1} , {0 , -1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxarea = 0 ; 
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols; j++){
                if(grid[i][j] == 1){
                    int area = 0 ; 
                    dfs(grid , i , j , area);
                    maxarea = max(maxarea , area);
                }
            }
        }

        return maxarea;
    }
public:
    void dfs(vector<vector<int>>& grid , int row , int col , int& area){
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == 0){
            return;
        }
        area++;
        grid[row][col] = 0;
        for(int i = 0 ; i < 4 ; i++){
            dfs(grid , row + directions[i][0] , col + directions[i][1] , area);
        }
    }    
};
