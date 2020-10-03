// 5
// 1 3 10 1 4
// 
// 19

#include <iostream>

using namespace std;

int main() {
    int n;
    int a[110];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    cout << sum << endl;

    // even numbers 
    for (int i = 0; i < n; i++) 
        if (a[i] % 2 == 0) 
            cout << a[i] << " ";
    cout << endl;

    // odd index
    for (int i = 0; i < n; i++) 
        if (i % 2 == 0) 
            cout << a[i] << " ";

    // positive numbers
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            cnt++;            
    cout << cnt;
    return 0;
}