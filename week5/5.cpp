#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxi = a[0];
    int mini = a[0];
    int ind_min = 0;
    int ind_max = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > maxi) {
            maxi = a[i];
            ind_max = i;
        }
        if (a[i] < mini) {
            mini = a[i];
            ind_min = i;
        }
    }

    cout << maxi << " " << ind_max << endl;
    cout << mini << " " << ind_min << endl;

    return 0;
}
// 15 3
// 1 0