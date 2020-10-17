#include <iostream>

using namespace std;

int main() {
    int n, x = 0, y = 0, d = 0;
    int a[100][100];
    cin >> n;

    for (int i = 0; i < n + 2; i++)
        for (int j = 0; j < n + 2; j++)
            a[i][j] = 0;


    while (true) {
        a[x][y] = 1;
        int x1 = x, y1 = y, d1 = d;
        if (d == 0) {
            if (y + 1 < n && a[x][y + 2] == 0)
                y++;
            else
                d = 1;
        }
        if (d == 1) {
            if (x + 1 < n && a[x + 2][y] == 0)
                x++;
            else
                d = 2;            
        }
        if (d == 2) {
            if (y - 1 >= 0 && a[x][y - 2] == 0)
                y--;
            else
                d = 3;
        }
        if (d == 3) {
            if (a[x - 2][y] == 0)
                x--;
            else 
                d = 0;
        }

        if (x == x1 && y == y1 && d == d1)
            break;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;
    }


    return 0;
}