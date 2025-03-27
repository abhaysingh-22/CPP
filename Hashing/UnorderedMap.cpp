#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int, string> r;

    r.insert(make_pair(1, "badoni"));
    r.insert(make_pair(2, "abhay"));
    r[3] = "pradeep";
    r[4] = "abhay";
    // r[3] = "himanshu";    iss type se krne pr update ho jaye ga lekin niche dekho
    r.insert(make_pair(1, "aaysuh"));    // iss type se krne pr update nahi hoga ye ek tra se properties ki tarah hai insert ki

    for(auto it : r){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}