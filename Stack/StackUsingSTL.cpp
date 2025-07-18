#include <bits/stdc++.h>
using namespace std;

// add header file stack
#include <stack>

int main(){

    stack<int> st;
    // cout << st.pop() << endl; // should print an error message for underflow
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;
    st.pop();
    st.pop();
    cout << "Is stack empty after popping all elements? " << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}