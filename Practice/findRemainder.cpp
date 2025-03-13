#include <bits/stdc++.h>
using namespace std;


int findremainder(string N){
    int len = N.length();

    long long num = 0;

    for(int i = 0; i < len; i++){
        num = (num * 10 + (N[i] - '0')) % 7;
    }

    return num;
}

int main(){

    string N;
    cin >> N;

    cout << findremainder(N) << endl;

    return 0;
}