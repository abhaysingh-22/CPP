#include <iostream>
using namespace std;

// int main(){
//     double a,b,c;
//     cin >> a >> b >> c;

//     double largest;
//     if(a >= b && a >= c){
//         largest = a;
//     }else if (b >= a && b >= c){
//         largest = b;
//     }else{
//         largest = c;
//     }
//     cout << largest << endl;
//     return 0;
// }


// int main(){
//     int n, fact = 1;
//     cin >> n;
//     for(int i = 1; i<= n; i++){
//         fact *= i;
//     }
//     cout << fact << endl;
//     return 0;
// }


// int main(){
//     int n, table;
//     cin >> n;
//     for (int i = 1; i <= 10; i++){
//         table = n*i;
//         cout << table << endl;
//     }
//     return 0;
// }



// int main(){
//     int n, isprime = 1;  //declare true 
//     cin >> n;
//     if(n <= 1){
//         isprime = 0;   //declared false 
//     }else{
//         for(int i = 2; i<= n/2 ; i++){
//             if(n % i == 0){
//                 isprime = 0;
//                 break;
//             }
//         }
//     }
//     if(isprime){ 
//         cout << "prime number" << endl;
//     }else{
//         cout << "not a prime number" << endl;
//     }
//     return 0;
// }




// int main(){
//     int n, reverse = 0;
//     cin >> n;

//     while (n != 0){
//         int digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n /= 10; 
//     }
//     cout << reverse << endl;
//     return 0;
// }





// int main(){
//     int a, b;
//     cin >> a >> b;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << a << b << endl;
//     return 0;
// }




// int main(){
//     int n, sum;
//     cin >> n;

//     while(n != 0){
//         sum += n % 10;
//         n /= 10;
//     }
//     cout << sum << endl;
//     return 0;
// }



// how to declare an array ?


// int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << ",";
//     }
//     return 0;
// }





// int main(){
//     int arr[5] = {23,34,45,21,3};
//     int max = arr[0];
//     for(int i = 0; i < 5; i++){
//         if (arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << max << endl;
//     return 0;
// }




// int main(){
//     int n;
//     int sum = 0;
//     cin >> n;

//     int arr[n];
    
//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     cout << sum << endl;
//     return 0;
// }





// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i = 0; i < 5; i++){
//         cout << arr[i];
//     }

//     for(int i = 4; i>=0; i--){
//         cout << arr[i];
//     }
//     return 0;
// }




// int main(){
//     int n;
//     cin >> n;
//     int evencount = 0;
//     int oddcount = 0;

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i<n; i++){
//         if(arr[i] % 2 == 0){
//             evencount++;
//         }else{
//             oddcount++;
//         }
//     }
//     cout << evencount << endl;
//     cout << oddcount << endl;
//     return 0;
// }








// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int key, index = -1;
//     cout << "enter the number to find: ";
//     cin >> key;

//     for(int i = 0; i < 5; i++){
//         if(arr[i] == key){
//             index = i;
//             break;
//         }
//     }

//     cout << index << endl;
//     // if (index != -1){
//     //     cout << "element found at index: " << index;
//     // }else{
//     //     cout << "element not found";
//     // }
//     return 0;
// }








// int main() {
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[5];

//     for (int i = 0; i < 5; i++) {
//         arr2[i] = arr1[i];
//     }

//     cout << "Original array: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr1[i] << " ";
//     }

//     cout << "\nCopied array: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr2[i] << " ";
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int min = 0;
    int max = 0;
    int sum;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        sum += min;
    }
    for(int i = 1; i < n; i++){
        sum += max;
    }
    cout << sum << " ";
    return 0;
}