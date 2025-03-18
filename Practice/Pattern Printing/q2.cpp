#include <bits/stdc++.h>
using namespace std;

vector<string> pattern(string& s) {
    // Your code goes here
    
    int n = s.length();
    
    vector <string> out;
    
    for(int i = 0; i < n; i++){
        out.push_back(s.substr(0, n-i));   // substr(starting index, length)  use to get substring from a string i.e. s.substr(0, 3) will return first 3 characters of string s henace used to extract substring from a string
    }
    
    return out;
}

int main(){

    string s;
    cin >> s;

    vector<string> res = pattern(s);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

    return 0;
}