#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map <int, int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;  // storing frequency of each element in the map
    }

    int sum = 0;

    for(auto it : freq){
        if(it.second > 1){  // checking if frequency is greater than 1
            sum += it.first;  // adding the element to the sum
        }
    }

    cout << sum << endl;

    return 0;
}