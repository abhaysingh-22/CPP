#include <iostream>
using namespace std;

class Rectangle{
    public:

    int l;
    int b;

    Rectangle(int x, int y){
        l = x;
        b = y;
    }
};

int main(){

    Rectangle* r1 = new Rectangle(5, 3);
    cout << r1->l << " " << r1->b << endl;
    delete r1;   //destructor       

    return 0;
}
