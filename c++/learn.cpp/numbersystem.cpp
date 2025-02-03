
// number system means 0 to 9 digits and powers of 10.
// eg:- 520 = (5 * 10^2) + (2 * 10^1) + (0 * 10^0)
// and binary system means 0 , 1 digits powers of 2 and base value = 2
// eg:- 1010 to the base 2 = (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (0 * 2^0)

// hexa decimal - base value 16 
//             - 0 to 15, power of 16 
// and note that here we denote:- A = 10, B = 11, C = 12, D = 13, E = 14, F = 15,
// eg:- 4A5C base of 16 = (4 * 16^3) + (10 * 16^2) + (5 * 16^1) + (12 * 16^0)

// to convert binary to decimal nothing just to expand the binary number and normally claculate it:- manually

// to convert decimal to binary nothing :--
// parity digit -->  n/2  -> remainder if;
// 1 --> parity odd of n
// 0 --> parity even of n  FOR EXAMPLE 14 DIVIDE BY 2 REMAINDER IS 0 and then 7 divide by 2 then remainder will be 1 similarly 3 divided by 2 remainder will be 1 and 1 divided by 2 it will give 0 hence our overall answer would be 0111. 


#include<iostream>
using namespace std;

/*int main(){

    int n ;
    cin >> n;

    int ans = 0;
    int power = 1;
    while (n > 0){
        int lastdigit = n % 10;
        ans += lastdigit*power;
        power *= 2;
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}*/

/*int main(){

    int n ;
    cin >> n;

    int ans = 0;
    int power = 1;

    while (n > 0){
        int paritydigit = n % 2; 
        ans += paritydigit * power;
        power *= 10;
        n /= 2;
    }
    cout << ans << endl;

    return 0;
}*/



// see one question on to how to convert binary to decimal and second one is to how to convert decimal to binary...

//and to highlight a sentense like this first select the text and then press shift and f3
