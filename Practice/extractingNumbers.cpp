#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> parts;

    int place = 1;

    while(n > 0){
        int digit = (n % 10) * place;
        parts.push_back(digit);
        n /= 10;
        place *= 10;
    }

    for(int i = parts.size() - 1; i >= 0; i--){
        cout << parts[i] << " ";
    }
    cout << endl;

    return 0;
}