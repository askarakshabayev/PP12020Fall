#include <iostream>
#include <map>

using namespace std;
// 6
// abc 
// bcd 
// abc 
// bcd 
// lll 
// abc 

// abc - 3
// bcd - 2
// lll - 1
// a["abc"] = 3 
// a["bcd"] = 2
// a["bcd"]++



int main() {
    // map<type_of_key, type_of_value> name_of_map;
    map<string, int> a, b;
    int n;
    cin >> n;
    // a["abc"] = 2
    // a["bcd"] = 1

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (a.find(s) == a.end())
            a[s] = 1; // a.insert(make_pair(s, 1))
        else 
            a[s]++;
    }

    map<string, int>::iterator it;
    
    for (it = a.begin(); it != a.end(); it++)
        cout << (*it).first << " - " << (*it).second << endl;

    for (it = b.begin(); it != b.end(); it++) {
        
    }

    
    return 0;
}