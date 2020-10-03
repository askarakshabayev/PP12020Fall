#include <iostream>

using namespace std;

int main() {
    int a[10][10];
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = i * j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";            
        }
        cout << endl;
    }
    return 0;
}