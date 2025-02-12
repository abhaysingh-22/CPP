#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    for(int i = 0; i < 5; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }

    for(int i = 0; i < v.size(); i++){       // normal loop
        cout << v[i] << " ";
    }
    cout << endl;


    for(int ele:v){            // for each loop
        cout << ele << " ";
    }
    cout << endl;



    int n = 0;
    while (n < v.size())          // while loop
    {
        cout << v[n] << " ";
        n++;
    }
    cout << endl;
    
}