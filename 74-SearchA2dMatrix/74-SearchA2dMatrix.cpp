// Last updated: 01/02/2026, 21:17:56
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        int row=0,col=cols-1;
        while(row < rows && col > -1){
            int cur=matrix[row][col];
            if(cur == target)
                return true;
            if(cur<target) 
                row++;
            else
                col--;
        }
        return false;
    }
};