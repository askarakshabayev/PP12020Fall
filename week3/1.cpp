#include <iostream>
#include <cmath>

using namespace std;


int main() {
    for (int i = 1, j = 1, m = 2; i <= 10; i++, j = pow(i, 2)) {
        cout << i << " " << j << endl;
    }
    return 0;
}