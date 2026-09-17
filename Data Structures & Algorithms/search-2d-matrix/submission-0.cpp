class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row1 = 0; 
        int row2 = m -1;
        int col1 = 0;
        int col2 = n-1 ;
        while(row1 <= row2){
            int mid = (row1 + row2) / 2;
            if(matrix[mid][0] == target){
                return true;
            }
            else if(matrix[mid][0] > target){
                row2 = mid-1;
            }
            else{
                row1 = mid+ 1;
            }
        }
        int row = row2;
        if(row < 0){
            return false;
        }
        while(col1 <= col2){
            int mid = (col1 + col2) / 2;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] > target){
                col2 = mid-1;
            }
            else{
                col1 = mid+ 1;
            }
        }

        return false;

    }
};
