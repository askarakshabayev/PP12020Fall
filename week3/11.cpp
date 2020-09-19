#include <iostream>

using namespace std;

int main() {

    for (int i = 1;;i++) { // i = 1, 2, 3
        if (i % 2 == 0) {
            continue;
        }

        cout << i << " ";
        if (i > 100) {
            break;
        }
    }
    return 0;
}
// 1 3 5 