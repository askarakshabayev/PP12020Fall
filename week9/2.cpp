#include <iostream>

using namespace std;

int a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int mini = a[0];
    int maxi = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] < mini)
            mini = a[i];
        if (a[i] > maxi)
            maxi = a[i];
    }

    int cnt = maxi - mini + 1;
    cout << cnt - n;
    
    return 0;
}