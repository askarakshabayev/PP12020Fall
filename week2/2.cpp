#include <iostream>

using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n; // 12
    a = n % 2; // 0
    n = n / 2; // n = 6
    b = n % 2; // b = 0
    n = n / 2; // n = 3
    c = n % 2; // c = 1
    n = n / 2; // n = 1
    d = n % 2;

    cout << d + c * 2 + b * 4 + a * 8;
    return 0;
}