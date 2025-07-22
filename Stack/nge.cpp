// next greater element

#include <bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int> &arr){

    int n = arr.size();
    vector<int> output(n, -1); //size and intial number
    stack<int> st;

    st.push(0); // index

    for(int i = 1; i < n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

int main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> result = nge(arr);

    cout << "Next Greater Elements: ";
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}