#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0; i < n; i++){
        cin >> v[i];
    }
    int target;
    cin >> target;
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v[i] + v[j] == target){
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}