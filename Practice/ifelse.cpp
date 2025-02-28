#include <bits/stdc++.h>
using namespace std;

string compareFive(int n){

    if(n > 5){
        return "Greater than 5" ;
    }else if(n < 5){
        return "Less than 5" ;
    }else{
        return "Equal to 5" ;
    }
}

int main(){
    
    int n;
    cin >> n;
    
    cout << compareFive(n) << endl;
    
    return 0;
}