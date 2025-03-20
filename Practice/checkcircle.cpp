#include <bits/stdc++.h>
using namespace std;

int circleTouch(int x1, int y1, int r1, int x2, int y2, int r2){

    int d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if (d == r1 + r2 || d == abs(r1 - r2)){
        return 1; 
    }else{
        return 0;
    }
}

int main(){
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    cout << circleTouch(x1, y1, r1, x2, y2, r2) << endl;
    return 0;
}