#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) { // i = 2
        for (int j = 1; j <= n; j++) { // j = 1, 2, 3, 4, 5
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
// 1 2 3 4 5
// 2 4 6 8 10