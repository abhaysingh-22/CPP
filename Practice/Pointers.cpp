#include <bits/stdc++.h>
using namespace std;

int main(){

    int x = 10;
    int *p = &x;

    cout << "address of p: " << p << endl;
    cout << "value at p: " << *p << endl;

    return 0;
}