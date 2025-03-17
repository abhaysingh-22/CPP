#include <bits/stdc++.h>
using namespace std;

void Multiply(vector<vector<int> >&A, vector<vector<int>>&B) {
    // Code here
    int n = A.size();
    
    vector<vector<int>> c(n, vector<int>(n, 0)); 
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            
            for(int k = 0; k < n; k++){
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    A = c;             // A will store the result of multiplication and B will remain same
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n)), B(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> B[i][j];
        }
    }
    Multiply(A, B);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}