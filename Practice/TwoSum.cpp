#include<bits/stdc++.h>
using namespace std;


                                                  // Approach 1: Using array

// int main(){

//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int target;
//     cin >> target;

//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[i] + arr[j] == target){
//                 cout << i << " " << j << endl;
//             }
//         }
//     }
// }







                                                     // Approach 2: Using vectors

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    

    for(int i =0; i < n; i++){
        cin >> v[i];
    }

    int target;
    cin >> target;


    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] + v[j] == target){
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}