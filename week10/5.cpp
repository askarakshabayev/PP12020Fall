#include <iostream>

using namespace std;

int func(int n) {
    if (n == 1)
        return 1;
    return func(n - 1) * n;
}

int f(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    result;
}

int main() {
    int n;
    cin >> n;
    int t = func(n);
    return 0;
}