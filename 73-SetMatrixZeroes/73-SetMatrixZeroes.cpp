// Last updated: 01/02/2026, 21:17:57
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        unordered_set<int> rows; 
        unordered_set<int> cols;

        int rowSize=matrix.size();
        int colSize=matrix[0].size();

        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(rows.count(i) || cols.count(j))
                    matrix[i][j]=0;
            }
        }
    }
};