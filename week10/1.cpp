#include <iostream>

using namespace std;

int f(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

// void f_matrix(int c[100][100], int n, int m) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//             cout << c[i][j] << " ";
//         cout << endl;
//     }
// }

int main() {
    int a[5] = {100, 2, 8, 6, 75};
    int b[3] = {1, 2, 3};
    int c[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // cout << f(a, 5) << endl;
    // cout << f(b, 3);
    // for (int i = 0; i < 2; i++)
    //     for (int j = 0; j < 3; j++)
    //         c[i][j] = i * j;
    // f_matrix(c, 2, 3);
    
    return 0;
}