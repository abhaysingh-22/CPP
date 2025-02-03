// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin >> n;
// //     for(int i=1;i<=n;i++){
// //         for(int j=1; j<=n-i; j++){
// //             cout << " ";
// //         }
// //         for(int k = 1;k<=i;k++){
// //             cout << "#";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // // Function to calculate the sum of array elements
// // int simpleArraySum(int ar[], int n) {
// //     int sum = 0;
// //     for (int i = 0; i < n; i++) {
// //         sum += ar[i];
// //     }
// //     return sum;
// // }

// // int main() {
// //     int n;
// //     cin >> n; // Number of elements in the array
// //     int ar[n];

// //     // Input array elements
// //     for (int i = 0; i < n; i++) {
// //         cin >> ar[i];
// //     }

// //     // Call the function and print the result
// //     cout << simpleArraySum(ar, n) << endl;
// //     return 0;
// // }


// #include<iostream>
// #include<iomanip>
// using namespace std;

// void calculateRatios(int arr[],int n){
//     int positivecount=0;
//     int negativecount=0;
//     int zerocount=0;
    
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             positivecount++;
//         }else if (arr[i]<0){
//             negativecount++;
//         }else{
//             zerocount++;
//         }
//     }
    
//     double positiveRatio = static_cast<double>(positivecount) /n;
//     double negativeRatio = static_cast<double>(negativecount) /n;
//     double zeroRatio = static_cast<double>(zerocount) /n;
    
//     cout << fixed << setprecision(6);
//     cout << positiveRatio << endl;
//     cout << negativeRatio << endl;
//     cout << zeroRatio << endl;
// }
// int main(){
//     int n;
//     cout << "Enter the number of elements: "<< endl;
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter the element of array: "<< endl;
//     for (int i=0; i<n;++i){
//         cin >> arr[i];
//     }
//     calculateRatios(arr,n);
    
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >>k;
    
    int arr[n];
    for(int  i=0;i<n;i++){
        cin>> arr[i];
    }
    
    int count = 0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] % k == 0){
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}    