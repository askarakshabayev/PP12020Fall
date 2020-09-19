#include <iostream>

using namespace std;

int main() {
    int n; // n = 365
    cin >> n;
    int sum = 0;
    while (n > 0) {             // n = 0
        sum += n % 10;          // sum = 0 + 5 + 6 + 3
        n /= 10;
    }

    cout << sum;
    return 0;
}