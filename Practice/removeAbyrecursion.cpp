#include <bits/stdc++.h>
using namespace std;

string f(string &s, int i, int n){

    if(i == n){
        return "";
    }

    string curr = "";
    curr += s[i];

    return ((s[i] == 'a') ? "" : curr) + f(s, i+1, n);
    
}

int main(){
    string s;
    cin >> s;

    int n = s.size();
    cout << f(s, 0, n) << endl;
    return 0;
}