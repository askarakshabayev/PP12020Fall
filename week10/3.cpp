#include <iostream>

using namespace std;

// 123 34 25 = sum = 1 + 2 + 3 + 3 + 4 + 2 + 5

int calc(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int sum = 0;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += calc(x);
    }
    cout << sum;
    return 0;
}