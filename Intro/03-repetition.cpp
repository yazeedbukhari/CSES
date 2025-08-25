#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;

    char curtype = input[0];
    int length = input.size();
    int curlen = 1, maxlen = 1;

    for (int i = 1; i < length; i++) {
        if (input[i] == curtype) {
            curlen++;
        }
        else {
            curlen = 1;
            curtype = input[i];
        }
        if (curlen > maxlen) maxlen = curlen;
    }

    cout << maxlen;
}