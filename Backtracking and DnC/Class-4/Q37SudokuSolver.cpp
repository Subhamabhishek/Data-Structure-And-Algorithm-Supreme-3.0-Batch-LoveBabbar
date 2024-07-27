class Solution {
public:
    bool isSafe(char digit, int row, int col, vector<vector<char>>& board){
        //3 rule
        //rowcheck
        int n = board.size();
        for(int k=0; k<n; k++){
            if(board[row][k] == digit){
                //same digit pehle se same row mein exist karta hai 
                return false;
            }
        }

        //row check
        for(int k=0; k<n; k++){
            if(board[k][col] == digit){
                //same col mein same digit pehle exist karta h
                return false;
            }
        }
        //3*3 sub-box check
        for(int k=0; k<n; k++){
            if(board[3*(row/3)+k/3][3*(col/3)+k%3] == digit){
                return false;
            }
        }
        //agar 3 rows badhiya chal rahe hein
        return true;
    }

    bool solve(vector<vector<char>>& board){
        //entire logic
        //base case?

        //1 case mein solve karunga and sab recurssion solve karega 
        //sabse pehle find empty cell
        //empty="."

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                //mein i and j wala cell pr aagaya
                //pr pata kaise lagega ki data fill karun ya nehi 
                //sirf empty cell pr fill karenge
                if(board[i][j] == '.'){
            //fill the cell cuzz it is empty
            // empty cel pr mujhe 1 ->9 tk digit hit and trial krne hei 
                    for(char digit='1'; digit<='9'; digit++){
                        // konsa digit rakhna sakta hun, ye kaise pta lagega?
                        //mujhe bs check karna hai , ki konsa digit rakhna safe heii
                        if(isSafe(digit, i, j, board) == true){
                            //agar safe heii thn rakho
                            board[i][j]=digit;

                            //baki recursion dekhega
                            bool ageSolveHoPaya = solve(board);
                            if(ageSolveHoPaya == true){
                                //poora board solve ho paya
                                return true;
                            }
                            else{
                                //age board solve nehi ho paya
                                //backtrack --> shayad mein galat digit rakh dia
                                board[i][j] = '.';
                            }
                        }

                    }
                    //yahan tumne ek digit place kardia hai bt recurssion se false aa gaya 
                    //agar app yahan pohoch gaya 
                    //iska matlab ye h ki 1->9 tk koi bhi digit yahan pr fot nehi ho raha 
                    //pichhe kahin par galat hai 
                    return false;
                }
            }
        }
        //yahan aagaye-->iska matlab
        //board -->completely fill ho gaya hai 
        //ans aa chuka hai 
        return true;

    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};




////////////same/////////
class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char val) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == val)
                return 0;
            if (board[row][i] == val)
                return 0;

            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == val)
                return 0;
        }
        return 1;
    }
    bool solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '.') {
                    for (char val = '1'; val <= '9'; val++) {
                        if (isSafe(i, j, board, val)) {
                            board[i][j] = val;
                            if (solve(board))
                                return 1;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return 0;
                }
            }
        }
        return 1;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};