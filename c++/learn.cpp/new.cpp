# include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num1 = 5; // its binary fn will be 0101
    int num2 = 8; // its binary fn will be 1000
    cout << (num1<<1) << endl;
    cout << (num1>>1) << endl;

    cout << (num1 & num2) << endl;
    cout << (num1 | num2) << endl;


    int a = 6;
    cout << (a++) << endl;
    cout << (++a) << endl;


    return 0;
}
