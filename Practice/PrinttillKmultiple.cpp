//given a number num and a value k print k multiple of num

#include <iostream>
using namespace std;

/*void f(int n, int k, int curr = 1){

    if(curr > k){
        return;
    }

    cout << n * curr << " ";
    f(n, k, curr+1);
}


int main(){
    
    int n, k;
    cin >> n >> k;

    f(n, k);
    return 0;
}*/

void f(int n, int k){

    if(k == 0){
        return;
    }

    f(n, k-1);
    cout << n * k << " ";
}

int main(){
    
    int n, k;
    cin >> n >> k;

    f(n, k);
    return 0;
}