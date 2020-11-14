#include <iostream>

using namespace std;

int b[10];

int main() {
    string s;
    cin >> s;
    // s = '9988' s[0] = '9' = 57 - 48 = 9
    for (int i = 0; i < s.size(); i++)
        b[s[i] - '0']++;

    for (int i = 0; i < 10; i++)
        if (b[i] > 0)
            cout << i << ": " << b[i] << endl;
    return 0;

    // 999833
    // 338999 -> 389
}