#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a %= b;
        else 
            b %= a;
    }
    return a + b;
}

int nok(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    int t = nok(n, m);
    cout << t;
    return 0;
}