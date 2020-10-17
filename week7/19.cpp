// abccba YES
// abc NO

#include <iostream>

using namespace std;

int main() {
    string s, s1; 
    cin >> s; // s = "abc"
    s1 = s;   // s1 = "abc"
    reverse(s.begin(), s.end()); // s = "cba"

    if (s == s1)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}