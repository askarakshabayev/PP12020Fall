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
vector<pair<int, string> > a;

int main() {
    int n;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(make_pair(x.size(), x));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        cout << a[i].second << endl;
    return 0;
}