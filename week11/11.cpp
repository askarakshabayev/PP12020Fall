#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int> > a;
    
    vector<int> b;
    b.push_back(1);
    b.push_back(2);

    a.push_back(b);

    return 0;
}