#include <iostream>

using namespace std;

int f(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

// void f() {
//     for (int i = 0; i < 10; i++) {
//         if (i > 2)
//             return;
//     }
// }

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int x = 4;

    int index = f(a, 5, x);
    if (index == -1) {
        cout << "NO";
    } else {
        cout << index;
    }
    
    return 0;
}