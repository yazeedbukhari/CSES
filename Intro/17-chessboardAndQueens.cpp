#include <iostream>
#include <vector>
using namespace std;

#define QUEEN 3
#define BLOCKED 1

int ans;

void recurse(int row, vector<vector<int>>& board)
{
    if (row == 8) 
    {
        ans++;
        return;
    }
    
    bool cont;
    for (int col = 0; col < 8; col++) 
    {
        if (board[row][col] == BLOCKED) continue;

        cont = false;

        // checking if column has queen
        for (int i = 0; i < row; i++) 
        {
            if (board[i][col] == QUEEN) 
            {
                cont = true;
                break;
            }
        }

        // checking diagonals
        for (int i = 0; i < row && !cont; i++) 
        {
            if (col + row - i < 8 && board[i][col+row-i] == QUEEN) 
            {
                cont = true;
                break;
            }

            if (col - (row - i) >= 0 && board[i][col-(row-i)] == QUEEN) 
            {
                cont = true;
                break;
            }
        }

        if (cont) continue;

        board[row][col] = QUEEN;

        recurse(row+1, board);

        board[row][col] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> board(8, vector<int>(8, 0));
    
    string row;
    for (int i = 0; i < 8; i++) {
        cin >> row;
        for (int j = 0; j < 8; j++)
        {
            if (row[j] == '*') board[i][j] = BLOCKED;
        }
    }
    
    ans = 0;
    recurse(0, board);

    cout << ans << "\n";
}