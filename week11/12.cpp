#include <iostream>
#include <set>
#include <vector>

using namespace std;
// input
// 7
// 1 2 3 1 3 6 1

// output
// 1 3 1

// a.find(x) => pointer to element, otherwise => a.end()
// 1 5 6  
// a.find(7)

//  1            2          5               6                   7                   8 
//  10           13         16              34                  45                  65
// a.begin()                                                                                a.end()
// a.rbegin(), a.rend()

int main()
{
    set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    
    a.erase(3);
    
    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << (*it);
    
    // int n, x;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     cin >> x;
    //     if (a.find(x) == a.end()) {
    //         a.insert(x);
    //     } else {
    //         cout << x << " ";
    //     }
    // }
    return 0;
}
