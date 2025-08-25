#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, curnum, diff;

    cin >> n;
    diff = n;
    for (int i = 1; i < n; i++) {
        cin >> curnum;
        diff += i - curnum;
    }

    cout << diff << endl;

    return 0;
}