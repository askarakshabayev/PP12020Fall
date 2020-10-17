#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a[100][100];
    int b[100], c[100];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        c[i] = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            c[i] += a[i][j];
        }
    }

    for (int i = 0; i < n; i++) { // i = 1
        b[i] = a[i][0];
        for (int j = 1; j < m; j++)
            if (b[i] < a[i][j])
                b[i] = a[i][j];
    }

    int maxi = b[0];
    int maxi_ind = 0;
    int k = 1;

    for (int i = 1; i < n; i++)
        if (maxi == b[i])
            k++;
        else if (maxi < b[i]) {
            maxi = b[i];
            k = 1;
            maxi_ind = i;
        }

    cout << k << endl;
    for (int i = 0; i < n; i++)
        if (maxi == b[i])
            cout << i + 1 << " ";
    // if (k > 1) {
    //     // b [ 7  4  7  5  7 ]
    //     // c [ 8  10 9  3  9]
    //     // ms = 9
    //     int maxi_sum = -1;
    //     for (int i = 0; i < n; i++) // i = 1, maxi = 7
    //         if (b[i] == maxi) {
    //             if (maxi_sum == -1 || maxi_sum < c[i]) {
    //                 maxi_sum = c[i];
    //                 maxi_ind = i;
    //             }
    //         }
    // }

    // cout << maxi_ind;


    return 0;
}