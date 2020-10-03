#include <iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                for (int k = 0; k < n; k++)
                    cout << a[k] << " ";
                cout << endl;
            }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}