#include <iostream>
using namespace std;

// this function is called  when an object is deleted 
// it cannot have any parameter in it

class Rectangle{
    public:

    int l;
    int b;

    Rectangle(int x, int y){
        l = x;
        b = y;
    }

    ~Rectangle(){      // Syntax
        cout << "Destructor is called";
    }
};

int main(){

    Rectangle r1(3,4);

    cout << r1.l << " " << r1.b << endl;
}
