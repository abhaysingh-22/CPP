#include<iostream>
using namespace std;

// int add( int num1, int num2){
//     int sum = num1 + num2;
//     return sum;
// }

// int main(){

//     int a = 5;
//     int b = 6;

//     cout << add(a,b) << endl;

//     return 0 ;
// }




//pow(a,b)   means a to the power b only use when #include<cmath>
//sqrt(a)   means a into a only usable when we write #include<cmath>





// int main(){
//     int p = 5;
//     int &q = p;

//     q++;
//     cout << p << endl;
//     cout << &p << endl;    // will print same id for both
//     cout << &q << endl;

//     return 0;
// }





// void changeValue(int z){
//     z = 100;              //in this case output will be "5" but if we write (int &z) then our answer become 100
// }

// int main(){
//     int a=5;
//     changeValue(a);
//     cout << a << endl;

//     return 0;
// }




// int add(int a, int b = 1, int c = 2){
//     return (a+b+c);
// }
// int main(){

//     cout << add(2) << endl;   //5
//     cout << add(2,2) << endl;  //6
//     cout << add(2,2,3) << endl;  //7                          

//     return 0;
// }







// int main(){
//     int n = 30 ;
//     for(int i = 1; i<=n; i++){
//         if( i % 15 == 0){
//             cout << "fizzbuzz" << endl;
//         }else if( i % 3 == 0){
//             cout << "buzz" << endl;
//         }else if( i % 5 == 0){
//             cout << "fizz" << endl;
//         }else{
//             cout << i << endl;
//         }
//     }
//     return 0;
// }




//how to declare a function 

// return_type fucntion_name(parameter1,parameter2,...){
//     statement;
// }
//and at the end of the function write "return" 



// int square(int x){
//     return x*x;
// }
// int main(){
//     for(int i = 1; i <= 5; i++){
//         cout << square(i) << endl;
//     }
//     return 0;
// }





// double area(int r){
//     return 3.14*r*r;
// }

// double circum(int r){
//     return 3.14*2*r;
// }

// int main(){
//     int r;
//     cin >> r;
//     cout << area(r) << endl;
//     cout << circum(r) << endl;
    
//     return 0;
// }







// bool checkeligible(int age, int limit){
//     if(age >= limit){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     int voting_limit = 18;
//     int is_eligible_for_voting = checkeligible(n, voting_limit);
//     if(is_eligible_for_voting){
//         cout << "can vote" << endl;
//     }else{
//         cout << "cannot vote" << endl;
//     }
//     return 0;
// }




// bool odd(int n){
//     if(n % 2 == 0){
//         return false;
//     }else{
//         return true;
//     }
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     for(int i = a; i <= b; i++){
//         if(odd(i)){
//             cout << i << " ";
//         }
//     }

//     return 0;
// }




// bool isPrime(int n){
//     for(int i = 2; i <= n-1; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     for(int i = a; i <= b; i++){
//         if(isPrime(i)){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }




