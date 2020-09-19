// 15ab@-834cd => 15834

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = 0;

    for (int i = 0; i < s.size(); i++) { // 15ab@-834cd
        if (s[i] >= '0' && s[i] <= '9') { // n = 15834
            n = n * 10 + (s[i] - '0');
        }
    }
    cout << n;

    return 0;
}