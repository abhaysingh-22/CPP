#include <bits/stdc++.h>
using namespace std;

static int clockSum(int num1, int num2){

    int sum = num1 + num2;

    if(num1+num2 >= 12){
        return 0;
    }else{
        return {sum};
    }
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;

    cout << clockSum(num1, num2) << endl;

    return 0;
}