#include <iostream>

using namespace std;

int f(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1) 
        return a;
        
    return f(a, b - 1) * a;
}

int main() {
    int a, b;
    cin >> a >> b;
    int c = f(a, b);
    cout << c;
    return 0;
}