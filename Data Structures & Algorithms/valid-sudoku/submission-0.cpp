class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char , int> row;
        unordered_map<char , int> column;
        vector<unordered_map<char , int>> square(9);
        for(int i = 0 ; i <  9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] != '.'){
                    int boxindex = ((i / 3 ) * 3 + (j / 3));
                    if(row.find(board[i][j]) != row.end()){
                        return false;
                    }
                    if(square[boxindex].find(board[i][j]) != square[boxindex].end()){
                        return false;
                    }
                    row[board[i][j]]++;
                    square[boxindex][board[i][j]]++;
                }
                
                if(board[j][i] != '.'){
                    if(column.find(board[j][i]) != column.end()){
                        return false;
                    }
                    column[board[j][i]]++;
                }    
                
                
            }
            row.clear();
            column.clear();


        }

        return true;
    }
};