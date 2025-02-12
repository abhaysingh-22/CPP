// // bidya quesion h 

#include <bits/stdc++.h>
using namespace std;


int largenum(int arr[], int n){
    int max = INT_MIN;
    int maxindex = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int indexlargest = largenum(arr, n);

    // arr[indexlargest] = -1;

    int largestelement = arr[indexlargest];
    for(int i = 0; i < n; i++){
        if(arr[i] == largestelement){
            arr[i] = -1;
        }
    }
    int secondlargest = largenum(arr, n);

    cout << arr[secondlargest] << endl;
    return 0;
}














//*************if every element in array is unique then you can use this***************










// #include <bits/stdc++.h>
// using namespace std;

// int largestnum(int arr[], int n){

//     int max = INT_MIN;
//     int maxindex = -1;

//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//             maxindex  = i;
//         }
//     }
//     return maxindex;
// }

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int firstlarge = largestnum(arr, n);
//     arr[firstlarge] = -1;

//     int secondlarge = largestnum(arr, n);

//     cout << arr[secondlarge] << endl;
//     return 0;
// }