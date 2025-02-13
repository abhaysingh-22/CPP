#include <bits/stdc++.h>
using namespace std;

void runningsum(int arr[], int n){
    
    for(int i=1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    runningsum(arr, n);
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}