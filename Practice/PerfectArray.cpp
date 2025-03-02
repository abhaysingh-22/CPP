//https://www.geeksforgeeks.org/problems/perfect-array2344/1

#include <bits/stdc++.h>
using namespace std;

bool isPerfect(vector<int>& arr){

    int n = arr.size();

    if(n < 1) return true;

    int i = 0;

    while(i < n - 1 && arr[i] < arr[i + 1]) i++;

    int j = i;
    while(j < n - 1 && arr[j] == arr[j + 1]) j++;

    int k = j;
    while(k < n - 1 && arr[k] < arr[k + 1]) k++;

    return k == n - 1;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << isPerfect(arr) << endl;

    return 0;
}