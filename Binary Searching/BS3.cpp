#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &input, int t){

    int lo  = 0;
    int hi = input.size() - 1;

    int ans = -1;

    while(lo <= hi){

        int mid = lo + (hi - lo) / 2;
        if(input[mid] == t){
            ans = mid;
            hi = mid - 1;
        }else if(input[mid] >= t){
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    return ans;
}

int lastOcc(vector<int> &input, int t){

    int lo  = 0;
    int hi = input.size() - 1;

    int ans = -1;

    while(lo <= hi){

        int mid = lo + (hi - lo) / 2;
        if(input[mid] == t){
            ans = mid;
            lo = mid + 1;
        }else if(input[mid] > t){
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int t;
    cin >> t;

    cout << firstOcc(arr, t) << endl;
    cout << lastOcc(arr, t) << endl;

    return 0;
}