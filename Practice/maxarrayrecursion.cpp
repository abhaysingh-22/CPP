#include<bits/stdc++.h>
using namespace std;

int f(int arr[], int i, int n){

    if(i == n-1){
        return arr[i];
    }

    int x = f(arr, i+1, n);
    return max(arr[i], x);
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<f(arr, 0, n)<<endl;
    return 0;
}