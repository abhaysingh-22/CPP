#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int x) {

    stack<int> tempStack;

    while(!s.empty()){
        int curr = s.top();
        s.pop();
        tempStack.push(curr);
    }

    s.push(x); 

    while (!tempStack.empty()) {
        int curr = tempStack.top();
        tempStack.pop();
        s.push(curr);
    }

}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Original stack: ";
    stack<int> temp = s;
    while (!temp.empty()) {
        int curr = temp.top();
        temp.pop();
        cout << curr << " ";
    }
    cout << endl;

    int x = 5; // Element to insert at the bottom
    insertAtBottom(s, x);

    cout << "Stack after inserting at the bottom: ";
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << " ";
    }
    
    return 0;
}