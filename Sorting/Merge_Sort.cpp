#include<bits/stdc++.h>
using namespace std;

void mS(vector<int> arr, int low, int high){

    if(low == high) return;

    mS(arr, low, high);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

// chor bae yarr