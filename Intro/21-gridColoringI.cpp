#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    cin >> row >> col;

    vector<string> grid(row);
    for (int i = 0; i < row; i++)
    {
        cin >> grid[i];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 'A'; k <= 'D'; k++)
            {
                if (grid[i][j] == k) continue; //old
                if (i > 0 && grid[i-1][j] == k) continue; //up
                if (j > 0 && grid[i][j-1] == k) continue; //left

                grid[i][j] = k;
                break;
            }
            cout << grid[i][j];
        }
        cout << "\n";
    }
}
