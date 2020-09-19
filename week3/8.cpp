#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int f = 1;

    for (int i = 1; i <= n; i++) { // i = 1, 2, 3, 4,  5, 6
        f = f * i;                 // f = 1, 2, 6, 24, 120
    }
    cout << f;
    return 0;
}

// sum of digits
// count of zero