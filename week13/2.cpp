#include <iostream>
#include <set>
#define m_it multiset<int>::iterator
#define ll long long
#define mp make_pair
#define f(i, n) for (int i = 0; i < n; i++) 

using namespace std;

int main() {
    multiset<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(6);
    a.insert(1);
    a.insert(2);
    a.insert(6);
    a.insert(1);
    a.insert(2);
    a.insert(6);
    // 1 1 1 2 2 2 6 6 6 
    pair<m_it, m_it> pr = a.equal_range(0);

    m_it it;
    for (it = pr.first; it != pr.second; it++)
        cout << *it << " ";

    return 0;
}