#include <iostream>

using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1;
    s2 = s1.substr(2, 3);
    s3 = s1.substr(3);
    cout << s2 << endl;
    cout << s3;
    return 0;
}