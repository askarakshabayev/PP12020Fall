#include <iostream>

using namespace std;

int main() {
    int n, k, p = -1;
    int a[100];
    cin >> n >> k;
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++)
        if (a[i] == k) {
            cout << i << " ";
            p = 0;
        }

    if (p == -1)
        cout << -1;
    return 0;
}