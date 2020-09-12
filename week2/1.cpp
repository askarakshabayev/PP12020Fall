#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + (b % 10) + (b / 100);
    cout << c;
    return 0;
}