#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};


bool checkEqualLL(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1 != nullptr && ptr2 != nullptr){
        if(ptr1->data != ptr2->data){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return (ptr1 == nullptr && ptr2 == nullptr);
}

int main(){

    vector<int> value1 = {1,2,3,4,5};
    vector<int> value2 = {1,2,3,4,5};

    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    for(int val : value1){
        Node* newNode = new Node(val);
        if(!head1){
            head1 = tail1 = newNode;
        }else{
            tail1->next = newNode;
            newNode->prev = tail1;
            tail1 = newNode;
        }
    }

    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    for(int val : value2){
        Node* newNode = new Node(val);
        if(!head2){
            head2 = tail2 = newNode;
        }else{
            tail2->next = newNode;
            newNode->prev = tail2;
            tail2 = newNode;
        }
    }

    bool result = checkEqualLL(head1, head2);
    cout << (result ? "Equal" : "Not Equal") << endl;

    return 0;
}