#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int j = n - 1; j >= 0; j--) {
        int x = 0;
        int y = j;
        while (x < n && y < n) {
            cout << a[x][y] << " ";
            x++;
            y++;
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++) {
        int x = i;
        int y = 0;
        while (x < n && y < n) {
            cout << a[x][y] << " ";
            x++;
            y++;
        }
        cout << endl;
    }
    return 0;
}