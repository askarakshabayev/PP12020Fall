#include <iostream>

using namespace std;

int min_(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int main() {
    cout << min_(2, 3) << endl;
    cout << min_(3, 4) << endl;
    return 0;
}