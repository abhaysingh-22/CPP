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

    int sum = 0;
    for(int i = 0; i < n; i++){
        
        
        int ele = arr[i];
        sum += ele;

        cout << sum/(i+1) << " ";
    }
    return 0;
}