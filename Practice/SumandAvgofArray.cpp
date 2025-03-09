#include <bits/stdc++.h>
using namespace std;

bool f(int arr[], int n){

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int r = sum / n;

    return r;
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << f(arr, n) << endl;

    return 0;
}