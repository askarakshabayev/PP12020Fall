#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    bool ok = true; // yes

    for (int i = 0; (i < n) && ok; i++)
        for (int j = 0; j < i; j++) {
            if (a[i][j] != a[j][i]) {
                ok = false; // no
                break;
            }
        }

    if (ok)
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}