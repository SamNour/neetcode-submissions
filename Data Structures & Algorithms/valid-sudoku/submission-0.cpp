class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        auto containsDuplicate = [&](vector<char>& arr) {
            std::unordered_set<char> hshSet;

            for (char c : arr) {
                if (c != '.') {
                    if (hshSet.contains(c))
                        return true;
                    hshSet.insert(c);
                }
            }

            return false;
        };

        for (int i = 0; i < board[0].size(); i ++){
            vector<char> rows {};
            vector<char> cols {};
            for (int j = 0; j < board.size(); j ++){
                cols.push_back(board[j][i]);
                rows.push_back(board[i][j]);
            }

            // validate all rows.
            if (containsDuplicate(rows))
                return false;
            // validate all columns
            if (containsDuplicate(cols))
                return false;
        }

        // create the 3x3 box
        for (int i = 0; i < board.size(); i += 3){
            for (int j = 0; j < board.size(); j += 3){
                vector<char> box {};
                for (int r = i; r < i + 3; r ++){
                    for (int c = j; c < j + 3; c ++){
                        box.push_back(board[r][c]);
                    }
                }   
                // validate all rows.
                if (containsDuplicate(box))
                    return false;
            }
        }
        return true;
    }
};
