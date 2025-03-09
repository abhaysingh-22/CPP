#include <bits/stdc++.h>
using namespace std;

string modify(string& s){

    string v = "aeiouAEIOU";

    vector<char> result;

    for(int i = 0; i < s.length(); i++){
        if(v.find(s[i]) != string::npos){
            result.push_back(s[i]);
        }
    }

    reverse(result.begin(), result.end());

    int index = 0;
    for(int i = 0; i < s.length(); i++){
        if(v.find(s[i]) != string::npos){
            s[i] = result[index++];
        }
    }

    return s;
}

int main(){

    string s;
    cin >> s;

    string result = modify(s);

    cout << result << endl;

    return 0;
}