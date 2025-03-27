#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> dir;


    dir["abhay"] = 564;
    dir["pradeep"] = 54;
    dir["himanshu"] = 64;


    // for(auto ele: dir){
    //     cout << "Name- " << ele.first << endl;
    //     cout << "Phone number- " << ele.second << endl;
    // }


    // map<string, int>::iterator it;
    // for(it = dir.begin(); it != dir.end(); it++){
    //     cout << "Name- " << it->first << endl;
    //     cout << "Phone number- " << it->second << endl;
    // }

    
    map<string, int>::reverse_iterator it;
    for(it = dir.rbegin(); it != dir.rend(); it++){
        cout << "Name- " << it->first << endl;
        cout << "Phone number- " << it->second << endl;
    }

    return 0;
}