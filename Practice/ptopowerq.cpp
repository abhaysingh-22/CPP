#include <bits/stdc++.h>
using namespace std;

int f(int p, int q){

    if(q == 0) return 1;

    int ans = pow(p, q);

    return ans;
}

int main() {
    int p, q;
    cin >> p >> q;
    cout << f(p, q) << endl;
    return 0;
}