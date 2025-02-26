// it is something like subsets of sets but here the relative order of the elements is preserved
// for example: "abc" has 8 subsequences: "", "a", "b", "c", "ab", "bc", "ac", "abc"

#include<bits/stdc++.h>
using namespace std;

void f(string &str, int i, string result, vector<string> &li){
    if(i == str.size()){
        li.push_back(result);
        return;
    }
    f(str, i+1, result, li);
    f(str, i+1, result+str[i], li);
}

int main (){
    string str = "abc";
    vector<string> li;
    f(str, 0, "", li);
    for(auto x: li){
        cout<<x<<endl;
    }
    return 0;
}


// just remember the above code and you can solve any question related to subsequence or subsets