#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a |= (1 << b);
    cout << a; 
    return 0;
}