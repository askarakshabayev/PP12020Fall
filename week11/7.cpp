#include <iostream>
#include <vector>

using namespace std;
int n, x;

int main() {
    vector<int> a(5, 2);
    a.push_back(10);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}