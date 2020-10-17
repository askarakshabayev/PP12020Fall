#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100][100];
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j)
                a[i][j] = 1;
            else if (j > i)
                a[i][j] = 0;
            else 
                a[i][j] = 2;
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
        

    return 0;
}