#include <bits/stdc++.h>
using namespace std;

void reverse(stack<int> &s) {

    stack<int> t1, t2;

    while(!s.empty()){
        int curr = s.top();
        s.pop();
        t1.push(curr);
    }

    while(!t1.empty()){
        int curr = t1.top();
        t1.pop();
        t2.push(curr);
    }

    while(!t2.empty()){
        int curr = t2.top();
        t2.pop();
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

    reverse(s);

    cout << "Stack after reversing: ";
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << " ";
    }
    
    return 0;
}