#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long length, cur, prev = 0, output = 0;

    cin >> length;

    for (long long i = 0; i < length; i++) {
        cin >> cur;
        if (cur < prev) {
            output += prev - cur;
            continue;
        }
        prev = cur;
    }

    cout << output;
}