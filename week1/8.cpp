#include <iostream>

using namespace std;

int main() {
    double b;
    cin >> b;
    int a = (int) (b + 0.5); // 5.4 + 0.5 = 5.9 // 5.6 + 0.5 = 6.1
    cout << a;
    return 0;
}