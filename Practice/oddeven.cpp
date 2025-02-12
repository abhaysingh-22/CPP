#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    int evensum = 0;
    int oddsum = 0;
    int diff;
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            evensum += arr[i];
        }else{
            oddsum += arr[i];
        }
        diff = evensum - oddsum;
    }
    cout << diff << endl;
    return 0;
}