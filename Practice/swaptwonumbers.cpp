#include <bits/stdc++.h>
using namespace std;


// without using a temporary variable
pair<int, int> swapTwoNumbers(int a, int b){

    swap(a, b);
    return {a, b};    // OR.....return make_pair(a, b);
}

int main(){

    int a, b;
    cin >> a >> b;

    pair<int, int> result = swapTwoNumbers(a, b);

    cout << result.first << " " << result.second << endl;

    return 0;
}