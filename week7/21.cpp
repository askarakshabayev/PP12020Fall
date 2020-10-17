#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    s.insert(2, "abc");
    cout << s;
    return 0;
}