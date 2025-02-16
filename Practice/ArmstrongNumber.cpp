#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;

    int temp = n;

    while(n > 0){
        int digit = n % 10;
        sum += digit*digit*digit;
        n /= 10;   //removes the last digit
    }
    if(temp == sum){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}