#include <iostream>
using namespace std;
int main(){
    cout <<"hello world"<<endl;
    cout <<"hello"<<endl<<"world";

    int apples;
    cin>>apples;

    cout<<"number of apples: "<<apples<<endl;


/* 2nd way to comment out */
//we cannot begin with a number
//space is not permitted in variable names like you can only wirte like this:-
//teaContainer OR tea_Container
//_2abc defined but 2_abc not defined


    int a,b;
    cout <<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    int c;
    c = b;
    b = a;
    a = c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    return 0;
}

