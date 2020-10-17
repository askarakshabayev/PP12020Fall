#include <iostream>

using namespace std;

int main() {
    string s;
    int start, length;
    cin >> s;
    cin >> start >> length;
    // cout << s.erase(start, length);
    cout << s.erase(start);
    return 0;
}