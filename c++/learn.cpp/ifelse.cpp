#include <iostream>

using namespace std;
/*int main(){

    int num;
    cin >> num;

    if(num % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    return 0;
}*/

/*int main(){

    int age ;
    cin >> age ;

    if(age < 12){
        cout <<"child"<< endl;
    }

    else if(age > 18){
        cout << "adult" << endl;
    }

    else{
        cout << "teenager" << endl;
    }
}*/

/*int main(){

    int marks;
    cin >> marks;

    if(marks > 33){
        cout << "pass" << endl;
    }
    else{
        cout << "fail" << endl;
    }

    marks > 33 ? cout << "pass" << endl : cout << "fail"<< endl;
    
    return 0 ; 
}*/

/*int main(){
    int num ;
    cin >> num ;

    if((num % 2 == 0) && (num % 3 == 0)){
        cout << num << endl;
    }
    return 0;
}*/

int main(){

    int day;
    cin >> day ;

    switch (day){
        case 1 : 
        cout << "monday" << endl;
        break;

        case 2 : 
        cout << "tues" << endl;
        break;

        case 3 : 
        cout << "wed" << endl;
        break;

        case 4 : 
        cout << "fri" << endl;
        break;

        case 5 : 
        cout << "thru" << endl;
        break;

        default:
        cout << "default case" << endl;

    }
    
    return 0;
}