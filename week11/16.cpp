// 6
// abd
// abc
// abbb
// z
// bb
// tttttt

// z
// bb
// abc
// abd
// abbb
// tttttt

#include <iostream>
#include <vector>

using namespace std;
vector<string> a;

bool gr(string s1, string s2) {
    if (s1.size() > s2.size())
        return true;
    if (s1.size() < s2.size())
        return false;
    return (s1 > s2);
}

bool f(string s1, string s2) {
    if (s1.size() < s2.size())
        return true;
    if (s2.size() < s1.size())
        return false;
    return (s1 < s2);
}

bool f1(int a, int b) {
    if (a % 2 == 0 && b % 2 == 1)
        return true;
    if (a % 2 == 0 && b % 2 == 0 && a > b)
        return true;
    if (a % 2 == 1 && b % 2 == 1 && a < b)
        return true;
    return false;
}

int main() {
    int n;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), f);

    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) 
    //         if (f(a[j],a[i]))
    //             swap(a[j], a[i]);
    // }

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}