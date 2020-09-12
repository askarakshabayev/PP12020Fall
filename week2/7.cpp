// a, b -> min(a, b)

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // a = 5, b = 6
    // if (a > b) {
    //     cout << b;
    // }

    // if (a <= b) {
    //     cout << a;
    // }

    if (a < b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;
}