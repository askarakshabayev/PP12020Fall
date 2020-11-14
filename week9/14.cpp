#include <iostream>

using namespace std;

int f(int a = 20) {
    return 2 * a;
}

int f(int a, int b) {
    return a + b;
}

int f(int a, double b) {
    return a - b;
}

int main() {
    int n, m;
    double a, b;
    cout << f();
    cout << f(a);
    cout << f(n, m);
    cout << f(n, a);
    cout << f(a, b);
    return 0;
}