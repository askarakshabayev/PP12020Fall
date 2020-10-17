#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin); // read
    freopen("output.txt", "w", stdout); // write

    int a[10][10];
    int n, m; // n, m <= 10    
    cin >> n >> m;
    // input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}