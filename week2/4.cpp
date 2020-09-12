#include <iostream>

using namespace std;

int main() {
    int a1 = 5;
    int a2 = 5;

    int b1 = a1++;
    // b1 = a1 // b1 = 5
    // a1 = a1 + 1 // a1 = 6
    int b2 = ++a2;
    // a2 = a2 + 1 // a2 = 6
    // b2 = a2 // b2 = 6

    cout << b1 << " " << b2;
    b1--;
    --b2;
    cout << b1 << " " << b2;
    return 0;
}