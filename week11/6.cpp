#include <iostream>
#include <vector>

using namespace std;
int n, x;

int main() {
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}