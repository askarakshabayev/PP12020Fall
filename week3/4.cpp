#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) { // i = 6
        if (n % i == 0) {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl << cnt;
    return 0;
}