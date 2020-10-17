#include <iostream>

using namespace std;

int main() {
    string s = "hello";
    cout << s.front() << " " << s.back() << endl;
    cout << s[0] << " " << s[s.size() - 1];
    return 0;
}