class Solution {
public:
    char check(vector<vector<char>> &v){
        for(int i=0;i<3;i++){
            if(v[i][0] == v[i][1] && v[i][0] == v[i][2] && v[i][0]!=' ')
                return v[i][0];

            if(v[0][i] == v[1][i] && v[0][i] == v[2][i] && v[0][i]!=' ')
                return v[0][i];
        }

        if(v[0][0] == v[1][1] && v[0][0] == v[2][2] && v[1][1]!=' ')
            return v[1][1];

        if(v[0][2] == v[1][1] && v[2][0] == v[1][1] && v[1][1]!=' ')
            return v[1][1];

        return ' ';
    }

    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> v(3, vector<char>(3, ' '));

        char turn = 'X';
        for(auto &m : moves){
            v[m[0]][m[1]] = turn;
            turn = (turn == 'X') ? 'O' : 'X';
        }

        char res = check(v);

        if(res == ' ')
            return moves.size() == 9 ? "Draw" : "Pending";

        return res == 'X' ? "A" : "B";
    }
};