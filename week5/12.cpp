#include <iostream>

using namespace std;

int n, x;
int a[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }

    // for (int i = 1; i <= 9; i++) {
    //     cout << i << " " << a[i] << endl;
    // }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= a[i]; j++) {
            cout << i << " ";
        }
    }
    return 0;
}