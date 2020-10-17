#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a[100][100];
    int b[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++) {      // i = 0, 1, 2
        b[i] = 0;
        for (int j = 0; j < m; j++) {  // j = 0
            b[i] += a[i][j];           // b[2] = 12
        }
    }

    int maxi = b[0];
    int row_ind = 0;
    for (int i = 1; i < n; i++)
        if (maxi < b[i]) {
            maxi = b[i];
            row_ind = i;
        }

    cout << row_ind << " " << maxi;

    return 0;
}