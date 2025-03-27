#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_multimap<string, int> fruit;

    fruit.insert({"apple", 1});
    fruit.insert({"banana", 2});
    fruit.insert({"orange", 3});
    fruit.insert({"orange", 5});

    // for(auto it = fruit.begin(); it != fruit.end(); ++it){
    //     cout << it->first << " " << it->second << endl;
    // }

    for(auto it : fruit){
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    return 0;
}