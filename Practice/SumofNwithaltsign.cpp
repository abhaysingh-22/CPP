// given a number n find the sum of natural numbers till n but with alternate sign

#include <bits/stdc++.h>
using namespace std;

int f(int n){

    if(n == 1){
        return 1;
    }

    if(n % 2 == 0){
        return -n + f(n-1);
    }else{
        return n + f(n-1);
    }
}

int main(){

    int n;
    cin >> n;

    cout << f(n) << endl;
    return 0;
}