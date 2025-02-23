#include <bits/stdc++.h>
using namespace std;

/*int f(int n){

    int original = n;
    int sum = 0;

    if(n == 0){
        return 0;
    }

    int digit = n%10;
    sum += digit*digit*digit;
    n = n/10;
    
    return sum + f(n);
}

int main(){

    int n;
    cin>>n;

    if(f(n) == n){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not Armstrong Number";
    }

    return 0;
}*/



int f(int n, int d){

    if(n == 0){
        return 0;
    }

    int digit = n%10;
    d = pow(digit, 3);
    n = n/10;
    
    return d + f(n, d);
}

int main(){

    int n;
    cin>>n;

    if(f(n, 0) == n){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not Armstrong Number";
    }

    return 0;
}