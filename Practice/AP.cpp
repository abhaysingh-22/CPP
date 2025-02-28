#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, n;
    cin >> a1 >> a2 >> n;

    int d = a2 - a1;

    int ans = a1 + (n-1)*d;
    cout << ans << endl;

    return 0;
}