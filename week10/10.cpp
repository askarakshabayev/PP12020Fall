#include <iostream>

using namespace std;

int a[100];

int fib(int n) {
    if (a[n] > 0)
        return a[n];
    if (n == 0 || n == 1)
        return 1;
    
    a[n] = fib(n - 1) + fib(n - 2);
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}