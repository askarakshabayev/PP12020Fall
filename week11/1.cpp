#include <iostream>

using namespace std;

int a[1000001];

bool f(int n) {
    if (a[n] == 1)
        return true;
    if (a[n] == 2)
        return false;
    
    if (n == 1)
        return true;
    bool f1 = false;
    bool f2 = false;
    if (n - 5 > 0) 
        f1 = f(n - 5);
    if (n - 3 > 0)
        f2 = f(n - 3);
    
    // if (f1 == true || f2 == true)
    //     a[n] = true;
    // else
    //     a[n] = false;
    
    bool ok = (f1 | f2);
    if (ok)
        a[n] = 1;
    else
        a[n] = 2;    
    
    return a[n];
}

int main() {
    int n;
    cin >> n;
    if (f(n)) 
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}