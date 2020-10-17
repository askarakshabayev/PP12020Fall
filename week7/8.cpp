// s1 = "world"
// s2 = "word"
// #
// cnt = 1
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j]) {
                cnt++;
                s2[j] = '#';
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}

