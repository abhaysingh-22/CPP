#include <iostream> 
using namespace std;

// % give MODULUS
// ++ means INCREMENT
// -- means DECREMENT

int main(){
    int num1 = 6;
    int num2 = 3;

    cout<< num1 + num2 << endl;
    cout<< num1 - num2 << endl;
    cout<< num1 * num2 << endl;
    cout<< num1 / num2 << endl;
    cout<< num1 % num2 << endl;

    cout<< (num1 == num2) << endl;
    cout<< (num1 != num2) << endl;
    cout<< (num1 >= num2) << endl;


    bool exp1 = true;
    bool exp2 = false;

    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;

    num1 += 3;
    cout << (num1) << endl;
    num2 -= 2;
    cout << num2 << endl;

    return 0;
}

// == is equals to 
// ! is not euals to 
// < and > greater and less than signs
// >= greater than or equal to 
// <= less than or equals to

/* && means logical AND */
/* || means logical OR */
/* ! means logical NOT */

// = noraml meanin that  you know
// += means a+= 1 then a = a + 1
// -= similar as above
// %= similar as above
// /= similar as above

