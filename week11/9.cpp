#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a[4];

    a[0].push_back(1);
    a[0].push_back(2);
    
    a[1].push_back(3);
    a[1].push_back(4);
    a[1].push_back(5);
    a[1].push_back(10);

    a[2].push_back(-1);

    a[3].push_back(100);
    a[3].push_back(200);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}