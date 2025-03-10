#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    for(int i = 0; i < 6; i++){
        if(n == 6){
            cout << "1" << endl;
            break;
        }else if(n == 5){
            cout << "2" << endl;
            break;
        }else if(n == 4){
            cout << "3" << endl;
            break;
        }else if(n == 3){
            cout << "4" << endl;
            break;
        }else if(n == 2){
            cout << "5" << endl;
            break;
        }else if(n == 1){
            cout << "6" << endl;
            break;
        }
    }
    return 0;
}