#include <bits/stdc++.h>
using namespace std;

void DelAtBottom(stack<int> &s, int idx) {

    stack<int> tempStack;

    while(!(size(s) == idx+1)){
        int curr = s.top();
        s.pop();
        tempStack.push(curr);
    }

    s.pop();

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

    int idx = 2; 
    DelAtBottom(s, idx);

    cout << "Stack after deleting at the bottom: ";
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << " ";
    }
    
    return 0;
}