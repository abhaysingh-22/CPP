#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int st, int end){

    int idx = st - 1;
    int pivot = arr[end];

    for(int i = st; i < end; i++){
        if(arr[i] <= pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void QS(vector<int> &arr, int st, int end){
    if(st < end){
        int pivot = Partition(arr, st, end);
        QS(arr, st, pivot-1);
        QS(arr, pivot+1, end);
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    QS(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}