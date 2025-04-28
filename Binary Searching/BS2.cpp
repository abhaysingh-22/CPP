#include<bits/stdc++.h>
using namespace std;

int srt(int x){

    int lo = 0;     // 0 to x ek tra se range h jaise array mai hota h..
    int hi = x;

    int ans = -1;

    while(lo <= hi){

        int mid = lo + (hi - lo) / 2;

        if(mid * mid <= x){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }

    return ans;
}

int main(){

    int x;
    cin >> x;

    cout << srt(x) << endl;

    return 0;
}