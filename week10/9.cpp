#include <iostream>

using namespace std;

void to_bin(int n) {
    if (n == 0)
        return;
    to_bin(n / 2);
    cout << n % 2;
}

int main() {
    int n;
    cin >> n;
    to_bin(n);
    return 0;
}