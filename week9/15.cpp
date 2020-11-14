#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s, t;
    while (getline(cin, s)) {
        // s = "asdf asdf"
        stringstream ss;
        ss << s; // "asdf asdf"
        int cnt = 0;
        while (ss >> t) // t = "asdf"
            cnt++;
        cout << cnt;
    }

    return 0;
}