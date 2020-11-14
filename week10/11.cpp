#include <iostream>

using namespace std;
int cnt;

void hanoi(char a, char b, char c, int n) {
    if (n == 1) {
        cout << a <<  "->" << c << endl;
        cnt++;
        return;
    }
    hanoi(a, c, b, n - 1);
    cout << a << "->" << c << endl;
    cnt++;
    hanoi(b, a, c, n - 1);
}

int main() {
    cnt = 0;
    int n;
    cin >> n;
    hanoi('a', 'b', 'c', n);
    cout << cnt;
    return 0;
}