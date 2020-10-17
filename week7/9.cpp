// s1 = "aa"
// s2 = "aaa"
// a[true, true, false]
// cnt = 1
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int a[s2.size()]; // a[i] = false, a[i] = true
    for (int i = 0; i < s2.size(); i++)
        a[i] = false;

    int cnt = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i] == s2[j] && a[j] == false) {
                cnt++;
                a[j] = true;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}

