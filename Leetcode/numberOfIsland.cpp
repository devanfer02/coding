class Solution {
public:
    

    
    void dfs(int x, int y, vector<vector<char>>& grid) {
        grid[x][y] = '0';
        
        int dx[] = {0,0, +1, -1};
        int dy[] = {+1, -1, 0, 0};
        for(int i = 0; i < 4; i++) {
            int tX = x + dx[i];
            int tY = y + dy[i];
            if(tX < 0 || tX >= grid.size() || tY < 0 || tY >= grid[0].size()) {
                continue;
            }
            if(grid[tX][tY] == '0') continue;
            dfs(tX,tY,grid);
        }
    }
    
    void bfs(int x, int y, vector<vector<char>>& grid) {
        int dx[] = {0,0, +1, -1};
        int dy[] = {+1, -1, 0, 0};
            
        queue<pair<int,int>> q;
        grid[x][y] = '0';
        q.push({x,y});
        
        int n = grid.size();
        int m = grid[0].size();
        
        while(!q.empty()) {
            pair<int,int> p = q.front();
            
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                int tX = p.first + dx[i];
                int tY = p.second + dy[i];
                if(tX < 0 || tX >= n || tY < 0 || tY >= m) {
                    continue;
                }
                if(grid[tX][tY] == '0') continue;
                q.push({tX,tY});
                grid[tX][tY] = '0';
                
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int counter = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    counter++;
                    bfs(i, j, grid);
                }
            }
        }
        
        return counter;
    }
};