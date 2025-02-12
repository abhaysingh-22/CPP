#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 5, 4, 6, 7, 8, 9};

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > arr[i-1]){
            cout << "sorted array" << endl;
        }else{
            cout << "array is not sorted" << endl;
        }
    }
    return 0;
}
