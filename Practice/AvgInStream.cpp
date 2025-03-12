// gfg 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j <= i; j++){
            sum += arr[j];
        }
        cout << sum/(i+1) << " ";
    }
    return 0;
}