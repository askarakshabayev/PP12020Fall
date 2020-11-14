#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a;
    a.push_back(2);
    a.push_back(10);
    a.push_back(1);
    a.push_back(6);
    a.push_back(5);

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";    
    return 0;
}