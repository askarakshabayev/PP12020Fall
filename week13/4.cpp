#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(3);
    st.pop();
    st.pop();

    cout << st.size() << endl; // 3
    // cout << st.top() << endl;  // 3
    cout << st.empty() << endl;// false (0)
    return 0;
}
