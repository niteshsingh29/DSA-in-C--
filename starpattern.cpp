#include <iostream>
using namespace std;

int main () {
    // int row, col;
    // cin >> row >> col;
    int n = 10;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    for (int a = 10; a >= 1; a--) {
        for (int b = 1; b <= n - a + 2; b++) {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}