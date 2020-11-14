#include <iostream>

using namespace std;

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int f(string s, int k) {
    int p = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isDigit(s[i])) 
            p++;
        else 
            p = 0;
        if (p == k)
            return true; 
    }
    return false;
} 

int main() {
    string s;
    int k;
    cin >> s >> k;
    if (f(s)) 
        cout << "Valid";
    else 
        cout << "Not valid";
    return 0;
}