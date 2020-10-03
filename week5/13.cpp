#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a[100][100];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // a[1][0]
            cin >> a[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}