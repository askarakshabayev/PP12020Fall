#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s = "hello";
    reverse(s.begin(), s.end());
    
    cout << s;
    return 0;
}