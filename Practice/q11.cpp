#include <bits/stdc++.h>
using namespace std;

void checkSum(int arr[], int n){

    int total_sum = 0;
    for(int i=0; i<n; i++){
        total_sum += arr[i];
    }

    int prefix_sum = 0;
    for(int i=0; i<n; i++){
        prefix_sum += arr[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum){
            cout << "yes" << endl;
        }
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    checkSum(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}