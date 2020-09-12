#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // 2 ^ n
    int p = (1 << n);
    cout << p;
    return 0;
}