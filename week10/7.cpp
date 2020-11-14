#include <iostream>

using namespace std;

int f(int *a, int k, int n) {
    if (k == n - 1)
        return a[k];
    return f(a, k + 1, n) + a[k];
}

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = f(a, 0, n);
    cout << s;
    return 0;
}