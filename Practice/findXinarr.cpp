#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n, int x){

    if(n == 0) return -1;

    if(arr[n-1] == x){
        return n-1;
    }

    return f(arr, n-1, x);
}

int main(){

    int n, x;
    cin >> n >> x;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(f(arr, n, x) == x){
        cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }

    cout << f(arr, n, x) << endl;
    return 0;
}