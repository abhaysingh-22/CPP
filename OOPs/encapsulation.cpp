#include <iostream>
using namespace std;

// abstract the data
// use for binding the method and variable together in a single unit
// also known as abstract data type

class ABC{

    int x;

    public:

    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};

int main(){

    ABC obj;
    obj.set(3);
    cout << obj.get() << endl;

    return 0;
}