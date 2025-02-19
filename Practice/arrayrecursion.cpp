#include <bits/stdc++.h>
using namespace std;

void f(int* arr, int i, int n){

    if(i == n) return;

    cout << arr[i] << " ";

    f(arr, i+1, n);
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    f(arr, 0, n);
    return 0;
}

// we are using int* arr because we are passing the address of the array to the function or you can say we are using this so that our input array can pass through the function
// you can also use int arr[] instead of int* arr