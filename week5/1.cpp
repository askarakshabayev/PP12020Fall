#include <iostream>

using namespace std;

int main() {
    int n = 4;
    int a[n];

    a[0] = 1;
    a[1] = 3;
    a[2] = 10;
    a[3] = 15;

    for (int i = 0; i < n; i++) // i = 1
        cout << a[i] << " ";

    return 0;
}