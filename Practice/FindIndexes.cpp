// find the element of the input index in the array

#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     int index;
//     cin >> index;
//     cout << arr[index] << endl;
//     return 0;
// }


void findIndex(int arr[], int n, int index) {
    cout << arr[index] << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int index;
    cin >> index;
    findIndex(arr, n, index);
    return 0;
}