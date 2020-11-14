#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(); // abcda
    bool ok = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {// i = 0, 
            ok = false;
            break;
        }
    }

    if (ok == false) {
        cout << n;
        return 0;
    }
    ok = true;
    for (int i = 0; i < n; i++)
        if (s[i] != s[0])
            ok = false;
    
    if (ok) {
        cout << 0;
        return 0;
    }

    cout << n - 1;

    return 0;
}