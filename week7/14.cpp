#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int a[s1.size()];

    // s1 = "hellollo"
    // s2 = "ll"
    int cnt = 0; // cnt = 2
    int pos = 0; // pos = 6
    // a[0] = 2
    // a[1] = 5
    while (s1.find(s2, pos) != string::npos) {
        a[cnt] = s1.find(s2, pos);
        cnt++;
        pos = s1.find(s2, pos) + s2.size();
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << a[i] << " ";

    return 0;
}