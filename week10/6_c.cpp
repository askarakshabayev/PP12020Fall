#include <iostream>
#include <iomanip>

using namespace std;

int c[101];

int f(int a[], int n, int b[], int m) {
    for (int i = 0; i < n; i++)
        c[a[i]]++;
    
    int cnt = 0;
    for (int i = 0; i < m; i++)
        if (c[b[i]] > 0) {
            cnt++;
            c[b[i]]--;
        }
    return cnt;
}

float f(float x) {
    // do something
    return x;
}

int main() {
    int x;
    cin >> x;
    cout << setprecision(4) << x;
    printf("%.4f", f(x));
    return 0;
}