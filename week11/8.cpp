#include <iostream>
#include <vector>

using namespace std;

void f(vector<int> &a) {
    a[0] = -1;
    a[3] = -4;
}

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    f(a);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    return 0;
}
