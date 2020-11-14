#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s = "123   2323    3232 134";
    stringstream ss;
    ss << s;
    int a; 
    while (ss >> a) {
        cout << a << endl;
    }
    return 0;
}

// 123 * 2
// 2323 * 2
// 3232 * 2