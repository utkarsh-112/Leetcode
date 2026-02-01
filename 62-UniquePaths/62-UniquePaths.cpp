// Last updated: 01/02/2026, 21:18:03
class Solution {
public:
    int uniquePaths(int m, int n) {
       long ans = 1;
        for(int i = m+n-2, j = 1; i >= max(m, n); i--, j++) 
            ans = (ans * i) / j;
        return ans;
    }

    // int countPaths(int m,int n,int i,int j){
    //     int dp[101][101]{};
    //     if(i >= m || j >= n) return 0;
    //     if(i == m-1 && j == n-1) return 1;
    //     if(dp[i][j]) return dp[i][j];
    //     return dp[i][j] = countPaths(m, n, i+1, j) + countPaths(m, n, i, j+1);   
    // }
};