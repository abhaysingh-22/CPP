#include <bits/stdc++.h>
using namespace std;

int main(){

    //input for first matrix
    int n1, m1;
    cin >> n1 >> m1;

    int a[n1][m1];

    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin >> a[i][j];
        }
    }

    //input for second matrix
    int n2, m2;
    cin >> n2 >> m2;

    int b[n2][m2];

    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            cin >> b[i][j];
        }
    }

    //condition rule for multiplication
    if(m1 != n2){
        cout << "Multiplication not possible" << endl;
    }

    //getting the product of the two matrices
    int c[n1][m2];

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            int ans = 0;
            for(int k = 0; k < m1; k++){
                ans += a[i][k] * b[k][j];
            }
            c[i][j] = ans;
        }
    }

    //printing the product matrix
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            cout << c[i][j] << " ";
        }cout << endl;
    }

    return 0;
}