#include <iostream>

using namespace std;

int main() {
    string s;
    int cnt;
    while (getline(cin, s)) {
        cnt++;
    }
    cout << cnt;
    return 0;
}