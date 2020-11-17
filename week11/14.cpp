#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, pair<string, string> > a;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string ID, name, surname;
        cin >> ID >> name >> surname;
        a[ID] = make_pair(name, surname);
    }

    for (int i = 0; i < m; i++) {
        string ID;
        cin >> ID;
        cout << a[ID].first << " " << a[ID].second << endl;
    }
    

    return 0;
}