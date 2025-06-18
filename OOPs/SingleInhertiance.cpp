#include <iostream>
using namespace std;

/*
//Single Inheritance
class Parent{
public:
    Parent(){
        cout << "Parent class" << endl;
    }
};

class Child : public Parent{
public:
    Child(){
        cout << "Child class" << endl;
    }
};

int main(){

    Child c;
    cout << endl;
    Parent p;

    return 0;
}
*/




// multi level Inheritance 
class Parent{
public:
    Parent(){
        cout << "Parent class" << endl;
    }
};

class Child : public Parent{
public:
    Child(){
        cout << "Child class" << endl;
    }
};

class grandChild : public Child{
public:
    grandChild(){
        cout << "grandChild class" << endl;
    }
};

int main(){

    grandChild gc;
    cout << endl;
    Child c;
    cout << endl;
    Parent p;

    return 0;
}