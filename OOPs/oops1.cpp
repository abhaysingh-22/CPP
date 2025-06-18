#include <iostream>
using namespace std;

class fruits{
public:

    int mango;
    int orange;
    int apple;
};

// class student{

//     string name;
//     string roll_no;
// };


int main(){

    fruits myobj;

    myobj.mango = 4;
    myobj.orange = 3;
    myobj.apple = 10;

    cout << myobj.mango << endl;
    cout << myobj.orange << endl;
    cout << myobj.apple << endl;

    return 0;
}