#include <bits/stdc++.h>
using namespace std;

int f(int *h, int n, int i){

    if(i == n-1) return 0;

    if(i == n-2){
        return f(h, n, i+1) + abs(h[i] - h[i+1]);
    }

    return min(f(h, n, i+1) + abs(h[i] - h[i+1]), f(h, n, i+2) + abs(h[i] - h[i+2]));
}

int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    cout << f(h, n, 0) << endl;
    return 0;
}