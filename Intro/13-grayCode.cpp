#include <iostream>
using namespace std;

void recurse(int layer, bool mirrored, string &back, int pos) 
{
    if (layer == 1) 
    {
        if (!mirrored) 
        {
            back[pos] = '0';
            cout << back << "\n";
            back[pos] = '1';
            cout << back << "\n";
        }
        else 
        {
            back[pos] = '1';
            cout << back << "\n";
            back[pos] = '0';
            cout << back << "\n";
        }
        return;
    }

    if (!mirrored) 
    {
        back[pos] = '0';
        recurse(layer - 1, false, back, pos + 1);
        back[pos] = '1';
        recurse(layer - 1, true,  back, pos + 1);
    } 
    else 
    {
        back[pos] = '1';
        recurse(layer - 1, false, back, pos + 1);
        back[pos] = '0';
        recurse(layer - 1, true,  back, pos + 1);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string back(n, '0');
    recurse(n, false, back, 0);
}