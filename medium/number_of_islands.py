void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& check) {
        check[i][j] = 1;
        vector<int> x = {-1, 1, 0, 0};
        vector<int> y = {0, 0, 1, -1};
        for(int l = 0; l < 4; l++) {
            if(i+x[l] < 0 || i+x[l] >= grid.size())
                continue;
            if(j+y[l] < 0 || j+y[l] >= grid[0].size())
                continue;
            if(grid[i+x[l]][j+y[l]] == '1' && check[i+x[l]][j+y[l]] == 0)
                dfs(grid, i+x[l], j+y[l], check);
        }
    }
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0) return 0;
        vector<vector<bool>> check(grid.size(), vector<bool>(grid[0].size(), 0));
        int count = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1' && check[i][j] == 0) {
                    count++;
                    dfs(grid, i, j, check);
                }
            }
        }
        return count;
    }
};