#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int n = matrix.size();
    if (n == 0) return false;
    int m = matrix[0].size();
    
    int low = 0, high = n * m - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midValue = matrix[mid / m][mid % m];
        
        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {61, 62, 63, 64}
    };
    int target = 3;
    
    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }
    
    return 0;
}