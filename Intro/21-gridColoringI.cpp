#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

char setVal(char left, char up, char old)
{
    unordered_set<char> chars = {'A', 'B', 'C', 'D'};

    chars.erase(left);
    chars.erase(up);
    chars.erase(old); 

    return *chars.begin();
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rowLength, colLength;
    cin >> rowLength >> colLength;

    vector<vector<char>> grid(rowLength, vector<char>(colLength));

    string row;
    for (int i = 0; i < rowLength; i++)
    {
        cin >> row;
        for (int j = 0; j < colLength; j++)
            grid[i][j] = row[j];
    }

    for (int i = 0; i < rowLength; i++)
    {
        for (int j = 0; j < colLength; j++)
        {
            if (i == 0 && j ==0)
            {
                grid[i][j] = setVal(0, 0, grid[i][j]);
            }
            else if (i == 0)
            {
                grid[i][j] = setVal(grid[i][j-1], 0, grid[i][j]);
            }
            else if (j == 0)
            {
                grid[i][j] = setVal(0, grid[i-1][j], grid[i][j]);
            }
            else
            {
                grid[i][j] = setVal(grid[i][j-1], grid[i-1][j], grid[i][j]);
            }
        }
    }

    for (int i = 0; i < rowLength; i++)
    {
        for (int j = 0; j < colLength; j++)
            cout << grid[i][j];
        cout << "\n";
    }
}
