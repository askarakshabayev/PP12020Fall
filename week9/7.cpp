#include <iostream>

using namespace std;

int a[201][201];

int main() {
    int n, m, x, cnt = 0;
    
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == x) {
                cnt++;
                break;
            }
    cout << cnt;

    return 0;
}