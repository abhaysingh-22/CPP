#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> dir;


    dir["abhay"] = 564;
    dir["pradeep"] = 54;
    dir["himanshu"] = 64;

    for(auto ele: dir){
        cout << "Name- " << ele.first << endl;
        cout << "Phone number- " << ele.second << endl;
    }

    return 0;
}