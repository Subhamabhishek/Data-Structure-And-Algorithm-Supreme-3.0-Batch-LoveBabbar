class Solution {
public:
    unordered_map<int,bool>rowCheck;
    unordered_map<int,bool>lowerDiagonalCheck;
    unordered_map<int,bool>upperDiagonalCheck;

    void storeSolution(vector<vector<string>>& ans, vector<vector<char>>& board, int n){
        vector<string>tempAns;
        for(int i=0; i<n; i++){
            string output="";
            for(int j=0; j<n; j++){
                output.push_back(board[i][j]);
            }
            //string is ready
            tempAns.push_back(output);
        }
        //vector of string is ready
        ans.push_back(tempAns);
    }

    bool isSafe(int row, int col, vector<vector<char>>& board){
        //brute for -->traverse board -->T>C ->n2
        //linear TC -->O(n)
        
        //check row
        if(rowCheck[row] == true){
            //not safe
            return false;
        }
        //check upper diagonal
        if(upperDiagonalCheck[row-col] == true){
            //not safe
            return false;
        }
        //check lower diagonal
        if(lowerDiagonalCheck[row+col] == true){
            //not safe
            return false;
        }
        //safe
        return true;

    }

    void solve(int n, vector<vector<char>>& board, vector<vector<string>>& ans, int col){
        //base case
        if(col >= n){
            //all queens are placed
            //store board arrangement in ans
            storeSolution(ans, board, n);
            return;
        }
        //1 case ham solve karenge and baki reccursion sambhal lega 
        //mere pass col ka index haii, uss coln me konsi row mei queen ko place karna hai 
        //vo yahan decide karna hai 
        for(int row=0; row<n; row++){
            //hr row pr queen place karke dekhunge
            if(isSafe(row,col,board)){
                board[row][col] = 'Q';
                rowCheck[row]=true;
                lowerDiagonalCheck[row+col]=true;
                upperDiagonalCheck[row-col]=true;
                //baaki kon sambhalega
                //recusion
                solve(n, board, ans, col+1);
                //backtracking --> ye mein bhul jata hun
                board[row][col] ='.';
                rowCheck[row]=false;
                lowerDiagonalCheck[row+col]=false;
                upperDiagonalCheck[row-col]=false;

            } 
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        //board
        vector<vector<char>> board(n, vector<char>(n,'.'));
        //start placing queen with 0th col
        int col =0;
        solve(n, board, ans, col);
        return ans;
    }
};