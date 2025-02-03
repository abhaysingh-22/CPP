#include <iostream>

using namespace std;
/*int main(){
    
    int n ;
    cin >> n ;

    int sum = 0 ;

    int i = 1 ; //loop variable
    while(i <= n){    //condition
        sum += i ;
        i++ ;   //updating loop variable
    }

    cout << sum << endl;

    return 0 ;
}*/

/*int main(){

    for( int i = 1 ; i < 5 ; i ++){
        cout << i ; 
    }

    return 0;
}*/

/*int main(){

    int n ;
    cin >> n ;

    int sum = 0 ;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;

    return 0; 
}*/


/*int main(){
    int i = 5;
    while(true){

        if ( i % 7 == 0){
            cout << i << endl;
            break;
        }
        i += 5 ;
    } 
    return 0 ;
}*/

/*int main(){

    int n ;
    cin >> n ;

    int sum = 0;
    do{
        int num ;
        cin >> num ; 
        sum += num ;
        n--;
    }while (n>0);

    cout << sum << endl;
    return 0;
    
}*/

int main(){

    for(int i = 1; i <= 50; i++){
        if(i % 3 == 0){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}


