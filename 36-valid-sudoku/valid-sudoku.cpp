class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> colums[9];
        unordered_set<char> box[9];
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;
                char value = board[r][c];
                int boxIndex = (r / 3) * 3 + (c / 3);
                if (rows[r].count(value) || colums[c].count(value) ||
                    box[boxIndex].count(value)){
                    return false;
                    }
                rows[r].insert(value);
                colums[c].insert(value);    
                box[boxIndex].insert(value);    
            }
        }
        return true;
    }
};