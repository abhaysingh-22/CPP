#include <bits/stdc++.h>
using namespace std;

stack<int> copyStack(stack<int> &input){

    stack<int> tempStack;

    while(!input.empty()){

        int curr = input.top();
        input.pop();
        tempStack.push(curr);
    }

    stack<int> outputStack;
    while(!tempStack.empty()){

        int curr = tempStack.top();
        tempStack.pop();
        outputStack.push(curr);
    }
    return outputStack;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // original stack is: 10 20 30 40 if you see the stack from top to bottom
    cout << "Original stack: ";
    stack<int> temp = st;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        cout << curr << " ";
    }
    cout << endl;

    stack<int> result = copyStack(st);

    cout << "Resultant Stack: ";
    while(!result.empty()){
        int curr = result.top();
        result.pop();
        cout << curr << " ";
    }

    return 0;
    
}