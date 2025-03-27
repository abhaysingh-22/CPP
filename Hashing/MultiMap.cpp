#include <bits/stdc++.h>
using namespace std;

int main(){

    multimap<string, int> dir;

    dir.insert(make_pair("Abhay", 123));
    dir.insert(make_pair("Pradeep", 23));
    dir.insert(make_pair("Pradeep", 23));   // Duplicate key are allowed
    dir["Pradeep"] = 24; // This will show an error


    for(auto it = dir.begin(); it != dir.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    cout << endl;
    return 0;
}