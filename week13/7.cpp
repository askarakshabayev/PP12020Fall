#include <iostream>
#include <queue>

using namespace std;
int x, y;
queue<int> q;
int u[100];  
int c[100];


int main() {
    cin >> x >> y;
    q.push(x);
    u[x] = 1;
    c[x] = x;
    while (!q.empty()) {
        x = q.front();
        if (x == y)
            break;
        if (u[x * 2] == 0) {
            q.push(x * 2);
            u[x * 2] = u[x] + 1; // x -> x * 2
            c[x * 2] = x;
        }
        if (u[x + 1] == 0) {
            q.push(x + 1);
            u[x + 1] = u[x] + 1;
            c[x + 1] = x;
        }
        if (x - 1 >= 0 && u[x - 1] == 0) {
            q.push(x - 1);
            u[x - 1] = u[x] + 1;
            c[x - 1] = x;
        }
        if (u[x / 2] == 0) {
            q.push(x / 2);
            u[x / 2] = u[x] + 1;
            c[x / 2] = x;
        }
        q.pop();
    }
    cout << u[y] - 1 << endl;

     
    while (c[y] != y) { // y = 15, 16, 8, 4, 2
        cout << y << endl;
        y = c[y]; 
    }
    cout << y;
    return 0;
}