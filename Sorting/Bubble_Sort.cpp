#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){ 
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}