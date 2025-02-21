#include <bits/stdc++.h>
using namespace std;

int f(int a, int b){

    if (b == 0){
        return a;
    }
    return f(b, a % b);

}

int main(){

    int a, b;
    cin >> a >> b;

    cout << "GCD is: " << f(a, b) << endl;
    return 0;
}