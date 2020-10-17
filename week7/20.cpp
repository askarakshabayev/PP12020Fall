#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool ok = true;
    
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        if (s[i] != s[j])
            ok = false;

    if (ok == true)
        cout << "YES";
    else
        cout << "NO";
    
    

    return 0;
}