#include <iostream>
#include <set>

using namespace std;
multiset<int> a;

int main() {
    a.insert(1);
    a.insert(2);
    a.insert(6);
    a.insert(1);
    a.insert(2);
    a.insert(6);
    a.insert(1);
    a.insert(2);
    a.insert(6);

    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    return 0;
}