#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    bool isPalindrome = true;
    
    for(int i = 0; i < n; i++){
        if(s[i] != s[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}