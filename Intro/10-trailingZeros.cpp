#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int fives = 0;
    for (int i = 5; i <= n; i+=5) {
        int x = i;
        while (x%5 == 0 && x > 0) {
            fives++;
            x /= 5;
        }
    }

    cout << fives << endl;
}
