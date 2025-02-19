#include <bits/stdc++.h>
using namespace std;

int f(int n){

    if(n >= 0 and n <= 9) return n;

    
    return n%10 + f(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}