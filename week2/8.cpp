#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c) { // && - and, || - or
        cout << a;
    } else if (b <= a && b <= c) {
        cout << b;
    } else {
        cout << c;
    }
    return 0;
}