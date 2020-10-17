// string::npos
#include <iostream>

using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    int pos = s1.find(s2);
    if (pos == string::npos)
        cout << "NO";
    else {
        cout << "YES" << endl << s1.find(s2);
    }
    return 0;
}