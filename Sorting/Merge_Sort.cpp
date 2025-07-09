#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1];
    int R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = arr[low + i];
    }

    for(int i = 0; i < n2; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
            k++;
        }else{
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mS(vector<int> &arr, int low, int high){

    if(low == high) return;
    int mid = (low + high) / 2;
 // recursive approach
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mS(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}