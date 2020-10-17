#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 1        1
    // 1 2      2
    // 1 2 3    3
    // 1 2 3 4  4
    return 0;
}