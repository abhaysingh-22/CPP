#include <iostream>
using namespace std;

/*int main(){
    int n , m ;
    cin >> n ;
    cin >> m;

    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0 ;
}*/

/*int main(){
    int n,m;
    cin >> n >> m;

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m; j++){
            if(i == 1 || j == 1 || i == n || j == m){
                cout << "*";
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }

    return 0;

}*/

/*int main(){
    int n;
    cin >> n ;
    for(int i = 1; i<= n ; i++){
        for(int j = 1; j<=i ;j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin >> n;
    for(int i = n; i >= 1 ; i--){
        for(int j = 1; j <= i; j++){
            cout << " *";
        }
        cout << endl;
    }
    return 0 ;
}*/
/*int main(){
    int n ;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= (n-i); j++){
            cout << " ";
        }
        for(int j = 1; j<=(2*i - 1); j++)
        cout << "*";
        cout << endl;
    }
    return 0 ;
}*/

/*int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j<= n ; j++){
            cout << j;
        }
        for(int j = 1; j <= (i-1); j++){
             cout << j;
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n ;
    cin >> n;
     for(int i = 1; i<=n ; i++){
        for(int j = 1; j <= n; j++){
            cout << j;
        }
        for(int j = 1; j<= 0; j++){
            cout << j;
        }
        cout << endl;
     }
    return 0 ;

}*/

/*int main(){
    int n,m; 
    cin >> n; 
    cin >> m; 
    for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(i == 1 || i == n){
               cout << j;
            }
            else {
                if ( j == 1 || j == m){
                    cout << j ;
                } else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n;
    int m;
    cin >> n ;
    cin >> m ;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m ; j++){
           if((i + j) % 2 == 0){
            cout << "1";
           } else {
               cout << "2";
           }
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}*/

/*int main(){
    int n;
    cin >> n ;

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j<= (n-i); j++){
            cout << " ";
        }
        for(int j = 1; j <= i ; j++){
            cout << j;
        }
        for(int j = (i-1); j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}*/




