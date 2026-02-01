// Last updated: 01/02/2026, 21:18:07
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int tot=m*n;
        int count=0;

        int startRow=0;
        int endRow=n-1;
        int startCol=0;
        int endCol=m-1;

        while(count<tot){
            for(int i=startCol;i<=endCol && count<tot;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for(int i=startRow;i<=endRow && count<tot;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            for(int i=endCol;i>=startCol && count<tot;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            for(int i=endRow;i>=startRow && count<tot;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};