// SORTED ROTATED ARRAY PROBLEM


#include<bits/stdc++.h>
using namespace std;


int findTarget(vector<int> &arr, int t){

    int lo = 0; 
    int hi = arr.size() - 1;

    while(lo <= hi){

        int mid = lo + (hi - lo) / 2;

        if(arr[mid] == t){
            return mid;
        }

        if(arr[mid] >= arr[lo]){
            if(t >= arr[lo] && t <= arr[mid]){
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }else{
            if(t >= arr[mid] &&t <= arr[hi]){
                lo = mid + 1;
            }else{
                hi = mid + 1;
            }
        }
    }

    return -1;
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

    cout << findTarget(arr, t) << endl;

    return 0;
}