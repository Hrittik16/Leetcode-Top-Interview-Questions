class Solution {
public:
    int total_islands = 0;
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j) {
        visited[i][j] = 1;
        int directions[2] = {-1, 1};
        for(auto &x: directions) {
            if(i+x >= 0 && i+x < grid.size()) {
                if(grid[i+x][j] == '1' && !visited[i+x][j])
                    dfs(grid, visited, i+x, j);
            }
            if(j+x >= 0 && j+x < grid[0].size()) {
                if(grid[i][j+x] == '1' && !visited[i][j+x])
                    dfs(grid, visited, i, j+x);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return total_islands;
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1' && !visited[i][j]) {
                    total_islands++;
                    dfs(grid, visited, i, j);
                }
            }
        }
        return total_islands;
    }
    // Time Complexity:- O(n*m)
    // Space Complexity:- O(n*m)
};
