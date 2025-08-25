#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (!(n%4 == 0 || (n+1)%4 == 0 )) {
        cout << "NO" << endl;
    }
    cout << "YES" << endl;

    if (n%4 == 0) {
        cout << n/2 << endl;
        for (int i = 1; i <= n/4; i++) {
            cout << i << " " << n-i << " ";
        }
        cout << endl
        
        cout << n/2 << endl;
        for (int i = n/4; i <= n/2; i++) {
            cout << i << " " << n-i << " "; 
        }
        cout << endl;
    }
    else {

    }
    
}