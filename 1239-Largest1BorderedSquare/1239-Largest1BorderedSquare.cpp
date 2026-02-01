// Last updated: 01/02/2026, 21:16:32
class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
        int h[1000][1000];
        int v[1000][1000];
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 0) {
                    h[i][j] = 0;
                    v[i][j] = 0;
                } else {
                    h[i][j] = j > 0 ? h[i][j - 1] + 1 : 1;
                    v[i][j] = i > 0 ? v[i - 1][j] + 1 : 1;
                }
            }
        }
        int maxi = 0;
        for (int i = grid.size() - 1; i >= 0; i--) {
            for (int j = grid[0].size() - 1; j >= 0; j--) {
                int small = min(v[i][j], h[i][j]);
                while (small > maxi) {
                    if (v[i][j + 1 - small] >= small && h[i + 1 - small][j] >= small) {
                        maxi = max(maxi, small);
                    }
                    small--;
                }
            }
        }
        return maxi * maxi;
    }
};