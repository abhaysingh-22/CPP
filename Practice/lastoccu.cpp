#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(6);
    
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }

    int x;
    cin >> x;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    return 0;
}