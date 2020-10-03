#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // i = 0, 1
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] * 2 << " ";
    }

    return 0;
}