#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    vector<vector<int>> c(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            c[i][j] = 0;
            c[i][j] += matrix[i][j] + matrix[i][j]; 
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}