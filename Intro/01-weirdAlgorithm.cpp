#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    cin >> x;
    cout << x;

    while (x > 1) {
        if (x & 1) x = x*3 + 1;
        else x /= 2;
        cout <<  " " << x;
    }

    cout << endl;
    return 0;
}