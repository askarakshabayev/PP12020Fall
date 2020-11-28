#include <iostream>
#include <queue>
#define mp make_pair

using namespace std;
int dx[8] = {2,  2, -2, -2, 1,  1, -1, -1};
int dy[8] = {1, -1,  1, -1, 2, -2,  2, -2};
int a[8][8];

bool f(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

int main() {
    int x, y, x1, y1;
    queue<pair<int, int> > q;
    cin >> x >> y >> x1 >> y1;
    a[x][y] = 1;
    q.push(mp(x, y));

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        for (int i = 0; i < 8; i++) {
            int x_ = x + dx[i];
            int y_ = y + dy[i];
            if (f(x_, y_) && a[x_][y_] == 0) {
                q.push(mp(x_, y_));
                a[x_][y_] = a[x][y] + 1;
            }
        }
        q.pop();
    }

    // for (int i = 0; i < 8; i++) {
    //     for (int j = 0; j < 8; j++) 
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    cout << a[x1][y1] - 1;
    return 0;
}