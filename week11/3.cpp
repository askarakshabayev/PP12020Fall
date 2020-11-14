#include <iostream>

using namespace std;
int used[100];
int a[100];
int n;

void print() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void f(int v) {
    if (v == n) {
        print();
        return;
    }
    for (int i = 1; i <= n; i++)
        if (used[i] == 0) {
            used[i] = 1;
            a[v] = i;
            f(v + 1);
            used[i] = 0;
        }
}

int main() {
    cin >> n;
    f(0);
    return 0;
}