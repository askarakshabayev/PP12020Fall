#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a[10][10];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    int mini = a[0][0];
    int maxi = a[0][0];
    int i_mini = 0;
    int j_mini = 0;
    int i_maxi = 0;
    int j_maxi = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < mini) {
                mini = a[i][j];
                i_mini = i;
                j_mini = j;
            }
            if (a[i][j] > maxi) {
                i_maxi = i;
                j_maxi = j;
                maxi = a[i][j];
            }
        }
    }

    cout << i_mini << " " << j_mini << " " << mini << endl;
    cout << i_maxi << " " << j_maxi << " " << maxi << endl;

    return 0;
}
