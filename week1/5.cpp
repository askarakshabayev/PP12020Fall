#include <iostream>

using namespace std;

int main() {
    char a, b, c, d;
    cout << sizeof(char) << endl;
    a = 'A'; // 65
    // 'B' - 66
    b = 'a'; // 97
    c = ' '; // 32
    d = '0'; // 48
    // '1' - 49

    cout << a << " " << (int)a << endl;
    cout << b << " " << (int)b << endl;
    cout << c << " " << (int)c << endl;
    cout << d << " " << (int)d << endl;
 
    return 0;
}