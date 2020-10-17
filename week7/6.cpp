// s1 = "1231232341234123453245324546757"
// s2 = "23452341234123523453245213412341234"
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() > s2.size()) {
        cout << "YES";
    } else if (s2.size() > s1.size()) {
        cout << "NO";
    } else {
        if (s1 > s2)
            cout << "YES";
        else 
            cout << "NO";
    }

    return 0;
}