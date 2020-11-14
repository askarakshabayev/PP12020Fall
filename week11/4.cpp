#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a; // [1, 5, 10, 15, 20]
    a.push_back(1);
    a.push_back(5);
    a.push_back(10);
    a.push_back(15);
    a.push_back(20);
    a.insert(a.begin() + 2, 11);
    a.erase(a.begin() + 1);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}