#include <iostream>

using namespace std;

int main() {
    char ch;    
    string s;
    cin >> ch >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != ch)
            cout << s[i];
    return 0;
}