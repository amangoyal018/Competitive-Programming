int minimumDistance(vector<vector<int>>& aa) {
    int rows = aa.size();
    int cols = aa[0].size();

    // Directions for movement: up, down, left, right
    vector<pair<int, int>> dirc = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    queue<pair<int, int>> q; 
    vector<vector<bool>> vis(rows, vector<bool>(cols, false));

    
    q.push({0, 0});
    vis[0][0] = true;
    int ans = 0;

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto [x, y] = q.front();
            q.pop();

            
            if (aa[x][y] == 9) return ans;

            
            for (auto [dx, dy] : dirc) {
                int nx = x + dx, ny = y + dy;

                
                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols &&
                    !vis[nx][ny] && (aa[nx][ny] == 1 || aa[nx][ny] == 9)) {
                    q.push({nx, ny});
                    vis[nx][ny] = true;
                }
            }
        }
        ans++;
    }

    return -1;
}