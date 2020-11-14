#include <iostream>

using namespace std;

int a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; ++i) // i = 0, 1, 2
        for (int j = i + 1; j < n; j++) // j = 3, 4, ...
            if (a[i] > a[j])
                swap(a[i], a[j]);

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += a[i] - a[i - 1] - 1;
    }
    // 2 3 6 8
    cout << sum;
    return 0;
}