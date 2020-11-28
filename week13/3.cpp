#include <iostream>
#include <map>
#define mp make_pair
#define map_it multimap<string, int>::iterator

using namespace std;

int main() {
    // key, value
    multimap<string, int> a;
    a.insert(mp("abc", 1));
    a.insert(mp("bcd", 2));
    a.insert(mp("abc", 3));
    a.insert(mp("bcd", 4));
    a.insert(mp("abc", 5));
    a.insert(mp("bcd", 6));
    // abc pr.first
    // abc
    // abc
    // bcd pr.second
    // bcd
    // bcd 

    pair<map_it, map_it> pr = a.equal_range("abc");

    map_it it;
    for (it = pr.first; it != pr.second; it++) 
        cout << (*it).first << " " << (*it).second << endl;


    // map_it it;
    // for (it = a.begin(); it != a.end(); it++)
    //     if ((*it).first == "abc")
    //         cout << (*it).second;

    return 0;
}