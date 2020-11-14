#include <iostream>

using namespace std;

int f(int n) {
    int f_ = 1;
    for (int i = 1; i < n; i++)
        f_ *= i;
    return f_;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << f(n) / (f(n - k) * f(k));
    return 0;
}