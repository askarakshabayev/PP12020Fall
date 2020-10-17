#include <iostream>

using namespace std;

int main() {
    string s = "123abc678d10";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            cout << s[i];
    }
    return 0;
}