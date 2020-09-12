#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // if (n % 2 == 0) {
    //     cout << "even";
    // } else {
    //     cout << "odd";
    // }
    // 95 - 100 - A
    // 90 - 94 - A-
    // 85 - 89 - B+ ...

    if (n >= 95) {
        cout << "A";
    } else if (n >= 90 && n < 95) {
        cout << "A-";
    } else if (n >= 85 && n < 90) {
        cout << "B+";
    } else {
        cout << "D";
    }
    return 0;
}