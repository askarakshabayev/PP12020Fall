#include <iostream>

using namespace std;

void func(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[5]= {1, 2, 3, 4, 5};

    func(arr, 5);
    return 0;
}