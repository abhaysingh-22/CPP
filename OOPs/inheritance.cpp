#include <iostream>
using namespace std;

class Parent{

    public:
    int x;

    protected:
    int y;

    private:
    int z;

    // Public setter and getter for z
    public:
    void setZ(int val) { z = val; }
    int getZ() { return z; }

    // Public setter and getter for y
    void setY(int val) { y = val; }
    int getY() { return y; }
};

class Child1 : public Parent{
public:
    void accessMembers() {
        x = 1; // OK: public
        y = 2; // OK: protected
        cout << "y is currently protected: " << y << endl;
        // z = 3; // Error: private member, not accessible
    }
};

int main(){

    Parent p;

    p.x; // OK: public
    // p.y; // Error: protected member, not accessible
    // p.z; // Error: private member, not accessible

    p.setZ(42); // Set z using public setter
    cout << p.getZ() << endl; // Access z using public getter

    p.setY(21); // Set y using public setter
    cout << p.getY() << endl; // Access y using public getter

    Child1 c;
    c.accessMembers();
    // Child1::accessMembers();
}