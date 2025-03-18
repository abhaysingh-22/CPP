#include <bits/stdc++.h>
using namespace std;

int isPossible(string S){
    //Code Here
    int n = S.size();
    
    unordered_set<string> st;
    
    string s = "";
    
    for(int i = 0; i < n; i++){
        s += S[i];
        
        if(st.find(s) == st.end()){       //here st.end is used to check if the string is not present in the set then insert it  || firstly st.find is used to check if the string is present in the set or not if not present then it become equal to st.end
            st.insert(s);
            s = "";
        }
        if(st.size() >= 4){
            return 1;
        }
    }
    return false;
}

int main(){
    string S;
    cin >> S;
    cout << isPossible(S) << endl;
    return 0;
}


/*
What is st.find(s)?
||st.find(s) searches for the string s in the unordered set st.
||If s exists in st, it returns an iterator pointing to the element.
||If s does not exist, it returns st.end(), which is an iterator beyond the last element (indicating that s was not found).


How Does st.end() Work?
||st.end() is a special iterator that does not point to any valid element.
||It represents the position just after the last element in the set.
||When st.find(s) == st.end(), it means s was not found in st.
*/