#include <bits/stdc++.h>
using namespace std;

int main(){

    int l, r;
    string s;
    cin >> s >> l >> r;

    for(int i = l; i <= r; i++){
        cout << s[i];
    }
    cout << endl;

    return 0;
}