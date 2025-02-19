#include <bits/stdc++.h>
using namespace std;

int f(int n){

    if(n == 1)return n;

    int ans = f(n - 1);
    cout << ans << " " ;
    return n;
}

int main() {
    int n;
    cin >> n;

    cout << f(n) << endl;
    return 0;
}