#include <bits/stdc++.h>
using namespace std;

//Construct a 6 input gate which performs the following logical operation:
// (not(A)).B + C.D +E.(not(F))
// where A, B, C, D, E and F are the inputs to the 6 input gate.

int logicalOperation(int A,int B,int C,int D,int E,int F){
    // code here
    return ((!(A)) && B || C && D || E && (!(F)));
}

int main(){

    int A,B,C,D,E,F;
    cin >> A >> B >> C >> D >> E >> F;

    cout << logicalOperation(A,B,C,D,E,F) << endl;

    return 0;
}