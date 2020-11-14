#include <iostream>

using namespace std;
int a[100];
int t;

void print() {
    if (t == 1)
        return;
    for (int i = 0; i < t - 1; i++)
        cout << a[i] << "+";
    cout << a[t - 1];
    cout << endl;
}

void f(int n, int p) {
    if (n == 0) {
        print();
    }
    for (int i = p; i <= n; i++) {
        a[t++] = i;
        f(n - i, i);
        t--;
    }
}

int main() {
    int n;
    t = 0;
    cin >> n;
    f(n, 1);
    return 0;
}