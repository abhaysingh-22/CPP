//gfg problem

#include <bits/stdc++.h>
using namespace std;

int f(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    return n*f(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}
