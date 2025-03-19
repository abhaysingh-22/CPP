#include <bits/stdc++.h>
using namespace std;

int DiagonalSum(vector<vector<int> >& matrix) {
    // Code here
    int p = 0;
    int s = 0;
    int n = matrix.size();
    
    for(int i = 0; i < n; i++){
        p += matrix[i][i];
        s += matrix[i][n-i-1];
    }
    
    return {p+s};
}

int main(){

    int n;
    cin >> n;
    vector<vector<int> > matrix(n, vector<int>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    cout << DiagonalSum(matrix) << endl;
    
    return 0;
}