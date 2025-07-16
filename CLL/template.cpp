#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{

    public:
    T val;
    Node* next;

    Node(T data){
        val = data;
        next = NULL;
    }
};

int main(){

    Node<int>* node1 = new Node<int>(79);
    Node<char>* node2 = new Node<char>('a');

    cout << node1->val << endl;
    cout << node2->val << endl;

    return 0;
}