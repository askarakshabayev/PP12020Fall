#include <iostream>

using namespace std;
int used[26];

int main() {
    string s;
    cin >> s;
    int n = s.size();
    // for (int i = 0; i < n; i++)
    //     if (used[s[i] - 'a'] == 0) {
    //         for (int j = i + 1; j < n; j++)
    //             if (s[i] == s[j]) {
    //                 used[s[i] - 'a'] = 1;
    //                 cout << s[i];
    //                 break;
    //             }
    //     }

    for (int i = 1; i < n; i++) { // s = "abcdefabcdef"
        for (int j = 0; j < i; j++)
            if (s[i] == s[j]) {
                cout << s[i];
                break;
            }
    }
    return 0;
}