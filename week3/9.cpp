#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s; // '51483'
    int sum = 0;
    for (int i = 0; i < s.size(); i++) { // i = 0
        sum += s[i] - '0'; // s[0] = '5' - '0' = 53 - 48 = 5
    } // '0' <= s[i] <= '9'

    cout << sum;
    // '0' - 48
    // '1' - 49
    // '2' - 50
    // ...
    // '5' - 53

    // "12" s[0] * 10 + s[1]
    return 0;
}