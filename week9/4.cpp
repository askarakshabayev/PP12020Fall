#include <iostream>

using namespace std;

int a[1001], b[1001];

int main() {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    int maxi = b[0];
    for (int i = 0; i <= 1000; i++)
        if (maxi < b[i])
            maxi = b[i];

    for (int i = 1000; i >= 0; i--)
        if (b[i] == maxi)
            cout << i << " ";
    return 0;
}